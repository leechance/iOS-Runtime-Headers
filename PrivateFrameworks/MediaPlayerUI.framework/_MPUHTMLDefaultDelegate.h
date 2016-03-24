/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface _MPUHTMLDefaultDelegate : NSObject <MPUHTMLParserDelegate> {
    NSDictionary *_defaultAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSDictionary *defaultAttributes;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultAttributes;
- (id)defaultAttributesForParser:(id)arg1;
- (id)parser:(id)arg1 attributesForTagName:(id)arg2 tagAttributes:(id)arg3 currentState:(id)arg4;
- (id)parser:(id)arg1 prependStringForTagName:(id)arg2;
- (void)setDefaultAttributes:(id)arg1;

@end
