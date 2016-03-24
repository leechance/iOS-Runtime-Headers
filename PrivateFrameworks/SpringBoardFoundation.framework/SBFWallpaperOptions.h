/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperOptions : NSObject <BSDescriptionProviding, NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    BOOL _hasVideo;
    BOOL _magnifyEnabled;
    NSString *_name;
    float _parallaxFactor;
    BOOL _portrait;
    double _stillTimeInVideo;
    BOOL _supportsCropping;
    float _zoomScale;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } bestWallpaperSize;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasVideo;
@property (readonly) unsigned int hash;
@property (getter=isMagnifyEnabled, nonatomic) BOOL magnifyEnabled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) BOOL parallaxEnabled;
@property (nonatomic) float parallaxFactor;
@property (nonatomic, readonly, copy) NSData *persistentDataRepresentation;
@property (getter=isPortrait, nonatomic) BOOL portrait;
@property (nonatomic) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCropping;
@property (nonatomic) float zoomScale;

+ (id)optionsWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(BOOL)arg4 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 portrait:(BOOL)arg6;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(BOOL)arg4 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })bestWallpaperSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)hasVideo;
- (unsigned int)hash;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(BOOL)arg4 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8;
- (id)initWithPersistentDataRepresentation:(id)arg1;
- (id)initWithStream:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMagnifyEnabled;
- (BOOL)isPortrait;
- (id)name;
- (BOOL)parallaxEnabled;
- (float)parallaxFactor;
- (id)persistentDataRepresentation;
- (id)persistentPropertyList;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHasVideo:(BOOL)arg1;
- (void)setMagnifyEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setParallaxFactor:(float)arg1;
- (void)setPortrait:(BOOL)arg1;
- (void)setStillTimeInVideo:(double)arg1;
- (void)setSupportsCropping:(BOOL)arg1;
- (void)setZoomScale:(float)arg1;
- (double)stillTimeInVideo;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)supportsCropping;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;
- (float)zoomScale;

@end
