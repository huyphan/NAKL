on isUIScriptingOn()
    tell application "System Events" to set isUIScriptingEnabled to UI elements enabled
    return isUIScriptingEnabled
end isUIScriptingOn

on turnUIScriptingOn(switch)
    tell application "System Preferences"
        activate
        set current pane to pane "com.apple.preference"
    end tell
    tell application "System Events"
        activate
        set UI elements enabled to switch
    end tell
end turnUIScriptingOn

on run
    if not isUIScriptingOn() then
        display dialog "NAKL không thể hoạt động nếu chưa được cấp quyền điều khiển bàn phím. Bạn cần phải kích hoạt bằng cách mở System Preferences > Security & Privacy > Privacy > Accessibility và đánh dấu vào NAKL. Nếu bạn đang dùng phiên bản MacOS cũ hơn 10.9, xin tham khảo thêm thông tin tại http://huyphan.github.io/NAKL/index.html#faq"
        turnUIScriptingOn(true)
        display dialog "Access for assistive devices in now on"
    end if
end run
