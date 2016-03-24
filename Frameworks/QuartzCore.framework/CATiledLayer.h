/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATiledLayer : CALayer

@property (getter=isDrawingEnabled) BOOL drawingEnabled;
@property struct CGColor { }*fillColor;
@property unsigned long levelsOfDetail;
@property unsigned long levelsOfDetailBias;
@property float maximumTileScale;
@property struct CGSize { float x1; float x2; } tileSize;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (double)fadeDuration;
+ (unsigned int)prefetchedTiles;
+ (BOOL)shouldDrawOnMainThread;

- (BOOL)_canDisplayConcurrently;
- (void)_colorSpaceDidChange;
- (void)_dealloc;
- (void)_display;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)displayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (struct CGColor { }*)fillColor;
- (void)invalidateContents;
- (BOOL)isDrawingEnabled;
- (unsigned long)levelsOfDetail;
- (unsigned long)levelsOfDetailBias;
- (float)maximumTileScale;
- (void)setContents:(id)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setLevelsOfDetail:(unsigned long)arg1;
- (void)setLevelsOfDetailBias:(unsigned long)arg1;
- (void)setMaximumTileScale:(float)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })tileSize;

@end
