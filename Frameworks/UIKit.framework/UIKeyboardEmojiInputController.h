/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiInputController : NSObject {
    UIKeyboardEmojiCategory *_lastViewedCategory;
}

@property UIKeyboardEmojiCategory *lastViewedCategory;

+ (id)activeInputView;
+ (Class)classForInputView;
+ (void)writeEmojiDefaults;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

- (void)emojiUsed:(id)arg1;
- (id)initWithInputView:(id)arg1;
- (id)lastViewedCategory;
- (int)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
- (id)recents;
- (void)setLastViewedCategory:(id)arg1;
- (id)skinToneBaseKeyPreferences;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;

@end
