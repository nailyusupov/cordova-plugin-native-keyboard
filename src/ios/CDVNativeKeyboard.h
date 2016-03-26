#import <Cordova/CDV.h>
#import <NativeKeyboard/NativeKeyboard.h>

@interface CDVNativeKeyboard : CDVPlugin<UITextViewDelegate, UIScrollViewDelegate, NSLayoutManagerDelegate>

- (void)show:(CDVInvokedUrlCommand*)command;
- (void)hide:(CDVInvokedUrlCommand*)command;

- (void)showMessenger:(CDVInvokedUrlCommand*)command;
- (void)hideMessenger:(CDVInvokedUrlCommand*)command;

@end