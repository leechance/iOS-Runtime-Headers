/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell <UIGestureRecognizerDelegate> {
    UILabel *_animationLabel;
    NSLayoutConstraint *_animationLabelLeadingConstraint;
    NSLayoutConstraint *_animationLabelToTopConstraint;
    BOOL _centerDepartureLabel;
    BOOL _centerPrimaryLabel;
    int _closingDragGestureAnimationCount;
    NSDate *_countdownReferenceDate;
    <MKTransitDeparturesCellDelegate> *_delegate;
    _MKAnimatableLabel *_departureLabel;
    NSLayoutConstraint *_departureLabelCenterX;
    NSLayoutConstraint *_departureLabelCenteringConstraint;
    NSLayoutConstraint *_departureLabelCustomTrailingMarginConstraint;
    NSLayoutConstraint *_departureLabelToBottomConstraint;
    NSLayoutConstraint *_departureLabelToTopConstraint;
    NSLayoutConstraint *_departureLabelTrailingAlign;
    unsigned int _departureStyle;
    UILabel *_departureSubtextLabel;
    NSLayoutConstraint *_departureSubtextLabelToBottomConstraint;
    NSLayoutConstraint *_departureSubtextToTopConstraint;
    NSTimeZone *_departureTimeZone;
    NSArray *_departures;
    BOOL _dragAnimateSubtext;
    NSAttributedString *_dragAnimationPreviousSubtext;
    NSAttributedString *_dragAnimationSubtext;
    UIView *_dragBackgroundView;
    float _dragGestureStartingPercentage;
    _MKGradientView *_dragGradientView;
    BOOL _inactive;
    UIButton *_incidentButton;
    BOOL _incidentButtonHidden;
    UIImageView *_incidentIconImageView;
    NSString *_incidentTitle;
    NSLayoutConstraint *_incidentToBottomConstraint;
    NSLayoutConstraint *_incidentToDepartureSubtextLabelConstraint;
    NSLayoutConstraint *_incidentToPrimaryConstraint;
    NSLayoutConstraint *_incidentToSecondaryConstraint;
    NSLayoutConstraint *_incidentTrailingConstraint;
    BOOL _isAnimatingMultiDepartureTransition;
    BOOL _isShowingMultipleDepartures;
    BOOL _isTrackingDragGesture;
    NSLayoutConstraint *_labelBufferConstraint;
    NSArray *_labelHeightConstraints;
    NSLayoutConstraint *_labelLeadingMarginConstraint;
    NSLayoutConstraint *_lineImageCompressedLeadingConstraint;
    NSLayoutConstraint *_lineImageLeadingConstraint;
    NSLayoutConstraint *_lineImageToContainerTrailingConstraint;
    NSLayoutConstraint *_lineImageToTextGutterConstraint;
    UIImageView *_lineImageView;
    NSLayoutConstraint *_lineImageViewCenteringConstraint;
    float _lineImageViewSize;
    NSLayoutConstraint *_lineImageViewToBottomConstraint;
    NSLayoutConstraint *_lineImageViewTopConstraint;
    UILabel *_primaryLabel;
    NSLayoutConstraint *_primaryLabelCenteringConstraint;
    NSLayoutConstraint *_primaryLabelHeightConstraint;
    NSLayoutConstraint *_primaryLabelWidthConstraint;
    NSLayoutConstraint *_primaryToBottomConstraint;
    NSLayoutConstraint *_primaryToDepartureLabelConstraint;
    NSLayoutConstraint *_primaryToTopConstraint;
    UILabel *_secondaryLabel;
    NSLayoutConstraint *_secondaryLabelHeightConstraint;
    NSLayoutConstraint *_secondaryToBottomConstraint;
    NSLayoutConstraint *_secondaryToPrimaryConstraint;
    BOOL _shouldAdjustSeparatorInsetToMargin;
    BOOL _showIncidentIcon;
    BOOL _showNoConnectionEmDash;
    BOOL _supressSelectionState;
    float _unadjustedLeadingSeparatorInset;
    BOOL _useCompressedGutter;
    BOOL _useCompressedLeading;
}

@property (nonatomic) BOOL centerDepartureLabel;
@property (nonatomic) BOOL centerPrimaryLabel;
@property (nonatomic, retain) NSDate *countdownReferenceDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitDeparturesCellDelegate> *delegate;
@property (nonatomic) unsigned int departureStyle;
@property (nonatomic, retain) NSTimeZone *departureTimeZone;
@property (nonatomic, retain) NSArray *departures;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isInactive, nonatomic) BOOL inactive;
@property (nonatomic, retain) UIButton *incidentButton;
@property (getter=isIncidentButtonHidden, nonatomic) BOOL incidentButtonHidden;
@property (nonatomic, copy) NSString *incidentTitle;
@property (nonatomic, readonly) BOOL isShowingMultipleDepartures;
@property (nonatomic, readonly) float labelMargin;
@property (nonatomic) float lineImageViewSize;
@property (nonatomic) BOOL shouldAdjustSeparatorInsetToMargin;
@property (getter=isShowingIncidentIcon, nonatomic) BOOL showIncidentIcon;
@property (getter=isShowingNoConnectionEmDash, nonatomic) BOOL showNoConnectionEmDash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCompressedGutter;
@property (nonatomic) BOOL useCompressedLeading;

+ (void)_calculateMaxLabelWidths;
+ (id)_departureSubtextAttributes;
+ (id)_departureSubtextFont;
+ (void)_enumerateMinutesUntilDepartureDates:(id)arg1 withReferenceDate:(id)arg2 block:(id /* block */)arg3;
+ (float)_maxSingleDepartureLabelWidth;
+ (float)_maxSingleDepartureSubtextLabelWidth;
+ (float)_minTextWidth:(BOOL)arg1;
+ (id)_multipleCountdownDepartureAttributes;
+ (id)_multipleCountdownFont;
+ (BOOL)_needsUpdateMaxLabelWidths;
+ (id)_nowFont;
+ (id)_nowString;
+ (id)_nowStringAttributes;
+ (id)_primaryFont;
+ (BOOL)_shouldScaleSingleCountdownValue;
+ (id)_singleCountdownDepartureAttributes;
+ (id)_singleCountdownFont;
+ (id)_singleCountdownSubtext;
+ (id)_timestampFont;
+ (float)defaultHeight;
+ (float)defaultLabelMargin;
+ (float)defaultLineImageViewSize;
+ (id)defaultSecondaryFont;
+ (id)displayableCountdowDepartureDatesFromDates:(id)arg1 withReferenceDate:(id)arg2;
+ (float)labelMarginWithLineImageViewWidth:(float)arg1;
+ (float)maxLineImageWidthforWidth:(float)arg1 compressed:(BOOL)arg2;
+ (id)strongSecondaryFont;
+ (id)timestampSecondaryFont;
+ (void)useCompressedGutter:(out BOOL*)arg1 compressedLeading:(out BOOL*)arg2 forImageWidth:(float)arg3 inWidth:(float)arg4 compressed:(BOOL)arg5;

- (void).cxx_destruct;
- (void)_addAnimationLabelWithText:(id)arg1;
- (void)_addCountdownConstraintsIfNeeded;
- (void)_addDepartureLabelTrailingConstraintIfNeeded;
- (void)_addEmDashAttributes:(id)arg1;
- (void)_addHeightConstraintWithPrimaryHeight:(float)arg1 secondaryHeight:(float)arg2;
- (void)_addIncidentButton;
- (void)_addIncidentIcon;
- (void)_addTimeStampConstraintsIfNeeded;
- (float)_adjustedSeparatorInsetToMargin:(float)arg1;
- (void)_commonInit;
- (void)_contentSizeCategoryDidChange;
- (unsigned int)_departureLabelStyle;
- (float)_departureLabelToTopScaleValueWithString:(id)arg1;
- (void)_departureText:(out id*)arg1 subtext:(out id*)arg2 forAnimationLabel:(BOOL)arg3;
- (unsigned int)_displayableDeparturesCount;
- (void)_enumerateMinutesUntilDepartureTimesWithBlock:(id /* block */)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_incidentButtonPressed;
- (id)_incidentIcon;
- (BOOL)_isRTL;
- (BOOL)_pointIsInCustomGestureBounds:(struct CGPoint { float x1; float x2; })arg1;
- (void)_removeIncidentButton;
- (void)_removeIncidentIcon;
- (float)_separatorHeight;
- (void)_setLineImageColumnCentered:(BOOL)arg1 withImageWidth:(float)arg2 centeringWidth:(float)arg3;
- (void)_updateConstraintValues;
- (void)_updateCountdownConstraintsForString:(id)arg1;
- (void)_updateDepartureLabelToTopConstraintWithString:(id)arg1;
- (void)_updateIncidentConstraints;
- (void)_updateLabelFonts;
- (void)_updateLineImageViewConstraints;
- (BOOL)centerDepartureLabel;
- (BOOL)centerPrimaryLabel;
- (id)countdownReferenceDate;
- (id)currentPrimaryHeightConstraintValue;
- (id)currentSecondaryHeightConstraintValue;
- (void)dealloc;
- (id)delegate;
- (unsigned int)departureStyle;
- (id)departureTimeZone;
- (id)departures;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)incidentButton;
- (id)incidentTitle;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isInactive;
- (BOOL)isIncidentButtonHidden;
- (BOOL)isOpaque;
- (BOOL)isShowingIncidentIcon;
- (BOOL)isShowingMultipleDepartures;
- (BOOL)isShowingNoConnectionEmDash;
- (float)labelMargin;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (float)lineImageViewSize;
- (void)refreshDeparturesDisplay;
- (void)setCenterDepartureLabel:(BOOL)arg1;
- (void)setCenterPrimaryLabel:(BOOL)arg1;
- (void)setCountdownReferenceDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepartureStyle:(unsigned int)arg1;
- (void)setDepartureTimeZone:(id)arg1;
- (void)setDepartures:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInactive:(BOOL)arg1;
- (void)setIncidentButton:(id)arg1;
- (void)setIncidentButtonHidden:(BOOL)arg1;
- (void)setIncidentTitle:(id)arg1;
- (void)setIsShowingMultipleDepartures:(BOOL)arg1 animated:(BOOL)arg2 primaryHeightConstraintValue:(id)arg3 secondaryHeightConstraintValue:(id)arg4 completion:(id /* block */)arg5;
- (void)setLeadingSeparatorInset:(float)arg1;
- (void)setLineImage:(id)arg1 forWidth:(float)arg2 compressed:(BOOL)arg3 center:(BOOL)arg4 centeringWidth:(float)arg5;
- (void)setLineImageViewSize:(float)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSeparatorHidden:(BOOL)arg1;
- (void)setShouldAdjustSeparatorInsetToMargin:(BOOL)arg1;
- (void)setShowIncidentIcon:(BOOL)arg1;
- (void)setShowNoConnectionEmDash:(BOOL)arg1;
- (void)setShowNoConnectionEnDash:(BOOL)arg1;
- (void)setUseCompressedGutter:(BOOL)arg1;
- (void)setUseCompressedLeading:(BOOL)arg1;
- (BOOL)shouldAdjustSeparatorInsetToMargin;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (BOOL)useCompressedGutter;
- (BOOL)useCompressedLeading;

@end
