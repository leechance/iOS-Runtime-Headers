/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarButton : UIControl {
    Class _appearanceGuideClass;
    _UIBadgeView *_badge;
    BOOL _badgeAnimated;
    BOOL _barHeight;
    NSMutableDictionary *_buttonTintColorsForState;
    BOOL _centerAllContents;
    NSMutableDictionary *_contentTintColorsForState;
    UIImage *_customSelectedIndicatorImage;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    UIView *_info;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _infoInsets;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _infoOffset;
    UITabBarButtonLabel *_label;
    NSValue *_labelOffsetValue;
    BOOL _selected;
    UITabBarSelectionIndicatorView *_selectedIndicator;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _selectedInfoOffset;
    BOOL _showsHighlightedState;
    UIColor *_unselectedTintColor;
    UIVisualEffectView *_vibrancyEffectView;
}

@property (setter=_setAppearanceGuideClass:, nonatomic) Class _appearanceGuideClass;
@property (setter=_setCenterAllContents:, nonatomic) BOOL _centerAllContents;
@property (getter=_isSelected, setter=_setSelected:, nonatomic) BOOL _selected;
@property (setter=_setShowsHighlightedState:, nonatomic) BOOL _showsHighlightedState;
@property (nonatomic, retain) NSValue *labelOffsetValue;
@property (nonatomic, readonly) UITabBarButtonLabel *tabBarButtonLabel;
@property (getter=_unselectedTintColor, setter=_setUnselectedTintColor:, nonatomic, retain) UIColor *unselectedTintColor;

+ (id)_defaultLabelColor;

- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (Class)_appearanceGuideClass;
- (void)_appleTV_layoutSubviews;
- (struct CGSize { float x1; float x2; })_appleTV_sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)_buttonTintColorForState:(unsigned int)arg1;
- (BOOL)_centerAllContents;
- (id)_contentTintColorForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForSelectedIndicator;
- (BOOL)_isSelected;
- (void)_positionBadge;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_scriptingInfo;
- (id)_selectedIndicatorView;
- (void)_sendFocusAction;
- (struct CGSize { float x1; float x2; })_sensitivitySize;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_setBarHeight:(float)arg1;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned int)arg2;
- (void)_setCenterAllContents:(BOOL)arg1;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned int)arg2;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setInfoOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setLabelHidden:(BOOL)arg1;
- (void)_setSelected:(BOOL)arg1;
- (void)_setSelectedInfoOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setShowsHighlightedState:(BOOL)arg1;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setUnselectedTintColor:(id)arg1;
- (void)_setUnselectedTintColor:(id)arg1 forceLabelToConform:(BOOL)arg2;
- (void)_setUpSelectedIndicatorViewIfNeeded;
- (BOOL)_shouldBeVibrant;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (BOOL)_showsHighlightedState;
- (id)_swappableImageView;
- (id)_tabBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tabBarHitRect;
- (struct UIOffset { float x1; float x2; })_titlePositionAdjustment;
- (id)_unselectedTintColor;
- (void)_updateInfoFrame;
- (void)_updateSelectedIndicatorView;
- (void)_updateToMatchCurrentState;
- (BOOL)_useBarHeight;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (id)labelOffsetValue;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setLabelOffsetValue:(id)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tabBarButtonLabel;

@end
