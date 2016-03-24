/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPFace : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    BOOL _leftEyeClosed;
    BOOL _rightEyeClosed;
    BOOL _smile;
    int _trackID;
    int _yaw;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property BOOL leftEyeClosed;
@property BOOL rightEyeClosed;
@property BOOL smile;
@property int trackID;
@property int yaw;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceBounds:(unsigned long)arg1 height:(unsigned long)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceBoundsWithTransform:(unsigned long)arg1 height:(unsigned long)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (unsigned int)flagsForOrientation:(BOOL)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3;
- (id)init;
- (id)initWithFCRFace:(id)arg1;
- (BOOL)leftEyeClosed;
- (BOOL)rightEyeClosed;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLeftEyeClosed:(BOOL)arg1;
- (void)setRightEyeClosed:(BOOL)arg1;
- (void)setSmile:(BOOL)arg1;
- (void)setTrackID:(int)arg1;
- (void)setYaw:(int)arg1;
- (BOOL)smile;
- (int)trackID;
- (int)yaw;

@end
