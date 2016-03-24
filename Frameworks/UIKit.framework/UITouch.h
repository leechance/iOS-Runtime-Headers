/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITouch : NSObject <_UIResponderForwardable> {
    <_UITouchPhaseChangeDelegate> *__phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    float _altitudeAngle;
    float _azimuthAngleInCADisplay;
    float _azimuthAngleInWindow;
    struct CGSize { 
        float width; 
        float height; 
    } _displacement;
    BOOL _eaten;
    int _edgeType;
    long _forceCorrelationToken;
    NSMutableArray *_forwardingRecord;
    NSMutableArray *_gestureRecognizers;
    BOOL _hasForceUpdate;
    struct __IOHIDEvent { } *_hidEvent;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    float _majorRadiusTolerance;
    float _maximumPossiblePressure;
    float _movementMagnitudeSquared;
    BOOL _needsForceUpdate;
    unsigned char _pathIdentity;
    unsigned char _pathIndex;
    float _pathMajorRadius;
    int _phase;
    struct CGPoint { 
        float x; 
        float y; 
    } _preciseLocationInWindow;
    struct CGPoint { 
        float x; 
        float y; 
    } _precisePreviousLocationInWindow;
    float _pressure;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocationInWindow;
    float _previousPressure;
    unsigned long long _senderID;
    unsigned int _tapCount;
    double _timestamp;
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
        unsigned int _abandonForwardingRecord : 1; 
        unsigned int _deliversUpdatesInTouchesMovedIsValid : 1; 
        unsigned int _deliversUpdatesInTouchesMoved : 1; 
        unsigned int _isPredictedTouch : 1; 
    } _touchFlags;
    int _type;
    UIView *_view;
    UIView *_warpedIntoView;
    UIWindow *_window;
}

@property (setter=_setDisplacement:, nonatomic) struct CGSize { float x1; float x2; } _displacement;
@property (getter=_isEaten, setter=_setEaten:, nonatomic) BOOL _eaten;
@property (setter=_setEdgeType:, nonatomic) int _edgeType;
@property (setter=_setForceCorrelationToken:, nonatomic) long _forceCorrelationToken;
@property (setter=_setForwardablePhase:, nonatomic) int _forwardablePhase;
@property (setter=_setHasForceUpdate:, nonatomic) BOOL _hasForceUpdate;
@property (setter=_setHidEvent:, nonatomic) struct __IOHIDEvent { }*_hidEvent;
@property (setter=_setIsPredictedTouch:, nonatomic) BOOL _isPredictedTouch;
@property (setter=_setMaximumPossiblePressure:, nonatomic) float _maximumPossiblePressure;
@property (setter=_setNeedsForceUpdate:, nonatomic) BOOL _needsForceUpdate;
@property (setter=_setPathIdentity:, nonatomic) unsigned char _pathIdentity;
@property (setter=_setPathIndex:, nonatomic) unsigned char _pathIndex;
@property (setter=_setPhaseChangeDelegate:, nonatomic, retain) <_UITouchPhaseChangeDelegate> *_phaseChangeDelegate;
@property (nonatomic, readonly) float _pressure;
@property (nonatomic, readonly) BOOL _respectsCharge;
@property (setter=_setResponder:, nonatomic, retain) UIResponder *_responder;
@property (setter=_setSenderID:, nonatomic) unsigned long long _senderID;
@property (nonatomic, readonly) float _unclampedForce;
@property (setter=_setWindowServerHitTestWindow:, nonatomic, retain) UIWindow *_windowServerHitTestWindow;
@property (nonatomic) float altitudeAngle;
@property (nonatomic, readonly) float azimuthAngle;
@property (setter=_setAzimuthAngleInCADisplay:, nonatomic) float azimuthAngleInCADisplay;
@property (nonatomic, readonly) float azimuthAngleInWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int estimatedProperties;
@property (nonatomic, readonly) int estimatedPropertiesExpectingUpdates;
@property (nonatomic, readonly) NSNumber *estimationUpdateIndex;
@property (nonatomic, readonly) float force;
@property (nonatomic, readonly, copy) NSArray *gestureRecognizers;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isTap;
@property (nonatomic) float majorRadius;
@property (nonatomic, readonly) float majorRadius;
@property (nonatomic) float majorRadiusTolerance;
@property (nonatomic, readonly) float majorRadiusTolerance;
@property (nonatomic, readonly) float maximumPossibleForce;
@property (nonatomic) int phase;
@property (nonatomic, readonly) int phase;
@property (nonatomic) BOOL sentTouchesEnded;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int tapCount;
@property (nonatomic, readonly) unsigned int tapCount;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic) int type;
@property (nonatomic, retain) UIView *view;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, retain) UIView *warpedIntoView;
@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, readonly) UIWindow *window;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(int)arg2 view:(id)arg3;
+ (void)_setShouldReverseAltitudeAngleSense:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_abandonForwardingRecord;
- (void)_addGestureRecognizer:(id)arg1;
- (void)_clearGestureRecognizers;
- (id)_clone;
- (void)_clonePropertiesToTouch:(id)arg1;
- (int)_compareIndex:(id)arg1;
- (void)_computeAzimuthAngleInWindow;
- (struct CGSize { float x1; float x2; })_displacement;
- (float)_distanceFrom:(id)arg1 inView:(id)arg2;
- (BOOL)_edgeForceActive;
- (BOOL)_edgeForcePending;
- (int)_edgeType;
- (long)_forceCorrelationToken;
- (int)_forwardablePhase;
- (id)_forwardingRecord;
- (id)_gestureRecognizers;
- (BOOL)_hasForceUpdate;
- (struct __IOHIDEvent { }*)_hidEvent;
- (BOOL)_isAbandoningForwardingRecord;
- (BOOL)_isEaten;
- (BOOL)_isFirstTouchForView;
- (BOOL)_isPredictedTouch;
- (BOOL)_isStationaryRelativeToTouches:(id)arg1;
- (void)_loadStateFromTouch:(id)arg1;
- (struct CGPoint { float x1; float x2; })_locationInSceneReferenceSpace;
- (struct CGPoint { float x1; float x2; })_locationInWindow:(id)arg1;
- (float)_maximumPossiblePressure;
- (id)_mutableForwardingRecord;
- (BOOL)_needsForceUpdate;
- (unsigned char)_pathIdentity;
- (unsigned char)_pathIndex;
- (float)_pathMajorRadius;
- (id)_phaseChangeDelegate;
- (id)_phaseDescription;
- (float)_pressure;
- (struct CGPoint { float x1; float x2; })_previousLocationInSceneReferenceSpace;
- (struct CGPoint { float x1; float x2; })_previousLocationInWindow:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (BOOL)_respectsCharge;
- (id)_responder;
- (SEL)_responderSelectorForPhase:(int)arg1;
- (unsigned long long)_senderID;
- (void)_setAltitudeAngle:(float)arg1;
- (void)_setAzimuthAngleInCADisplay:(float)arg1;
- (void)_setDisplacement:(struct CGSize { float x1; float x2; })arg1;
- (void)_setEaten:(BOOL)arg1;
- (void)_setEdgeType:(int)arg1;
- (void)_setForceCorrelationToken:(long)arg1;
- (void)_setForwardablePhase:(int)arg1;
- (void)_setHasForceUpdate:(BOOL)arg1;
- (void)_setHidEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (void)_setIsPredictedTouch:(BOOL)arg1;
- (void)_setLocation:(struct CGPoint { float x1; float x2; })arg1 preciseLocation:(struct CGPoint { float x1; float x2; })arg2 inWindowResetPreviousLocation:(BOOL)arg3;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (void)_setMaximumPossiblePressure:(float)arg1;
- (void)_setNeedsForceUpdate:(BOOL)arg1;
- (void)_setPathIdentity:(unsigned char)arg1;
- (void)_setPathIndex:(unsigned char)arg1;
- (void)_setPhaseChangeDelegate:(id)arg1;
- (void)_setPressure:(float)arg1 resetPrevious:(BOOL)arg2;
- (void)_setPreviousTouch:(id)arg1;
- (void)_setResponder:(id)arg1;
- (void)_setSenderID:(unsigned long long)arg1;
- (void)_setType:(int)arg1;
- (void)_setWindowServerHitTestWindow:(id)arg1;
- (BOOL)_shouldDeliverTouchForTouchesMoved;
- (float)_standardForceAmount;
- (BOOL)_supportsForce;
- (float)_unclampedForce;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateMovementMagnitudeFromLocation:(struct CGPoint { float x1; float x2; })arg1 toLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)_updateWithChildEvent:(struct __IOHIDEvent { }*)arg1;
- (BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (id)_windowServerHitTestWindow;
- (float)altitudeAngle;
- (float)azimuthAngle;
- (float)azimuthAngleInCADisplay;
- (float)azimuthAngleInView:(id)arg1;
- (float)azimuthAngleInWindow;
- (struct CGVector { float x1; float x2; })azimuthUnitVectorInView:(id)arg1;
- (void)dealloc;
- (id)description;
- (int)estimatedProperties;
- (int)estimatedPropertiesExpectingUpdates;
- (id)estimationUpdateIndex;
- (float)force;
- (id)gestureRecognizers;
- (int)info;
- (BOOL)isDelayed;
- (BOOL)isTap;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (float)majorRadius;
- (float)majorRadiusTolerance;
- (float)maximumPossibleForce;
- (int)phase;
- (struct CGPoint { float x1; float x2; })preciseLocationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })precisePreviousLocationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (BOOL)sentTouchesEnded;
- (void)setIsDelayed:(BOOL)arg1;
- (void)setIsTap:(BOOL)arg1;
- (void)setMajorRadius:(float)arg1;
- (void)setMajorRadiusTolerance:(float)arg1;
- (void)setPhase:(int)arg1;
- (void)setSentTouchesEnded:(BOOL)arg1;
- (void)setTapCount:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setView:(id)arg1;
- (void)setWarpedIntoView:(id)arg1;
- (void)setWindow:(id)arg1;
- (unsigned int)tapCount;
- (double)timestamp;
- (int)type;
- (id)view;
- (id)warpedIntoView;
- (id)window;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (struct CGPoint { float x1; float x2; })pu_locationInPresentationLayerOfView:(id)arg1;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (struct CGPoint { float x1; float x2; })locationInNode:(id)arg1;
- (struct CGPoint { float x1; float x2; })previousLocationInNode:(id)arg1;

@end
