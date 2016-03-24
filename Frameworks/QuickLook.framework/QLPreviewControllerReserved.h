/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewControllerReserved : NSObject {
    NSArray *additionalLeftBarButtonItems;
    NSArray *additionalRightBarButtonItems;
    UIBarButtonItem *archiveItem;
    QLArchiveViewer *archiveViewer;
    NSMutableDictionary *avStateForPreviewItems;
    BOOL blockRemoteImages;
    _UIAsyncInvocation *cancelViewServiceRequest;
    unsigned int crashCount;
    UIBarButtonItem *customActionItem;
    UIBarButtonItem *defaultActionItem;
    id delegate;
    int enqueuedWhitePointAdaptivityStyle;
    BOOL hasToolBar;
    UIDocumentInteractionController *interactionController;
    BOOL internalViewsLoaded;
    BOOL isDelayingPresentation;
    unsigned int isInUIDICPopover;
    QLActivityItemProvider *itemProvider;
    QLPreviewItemsSource *itemsSource;
    NSURL *lastPreviewedCurrentItemURL;
    NSURL *lastPreviewedRealItemURL;
    UIBarButtonItem *listItem;
    NSString *loadingTextForMissingFiles;
    UIView *mainView;
    int mode;
    unsigned int navigationButtonsMask;
    UINavigationController *navigationController;
    unsigned int orbMode;
    NSArray *originalLeftBarButtonItems;
    NSArray *originalRightBarButtonItems;
    int overlayState;
    int overlayStateBeforeDismissal;
    UIBarButtonItem *pauseButton;
    UIBarButtonItem *playButton;
    UIViewController<QLPreviewContentControllerProtocol> *previewContentController;
    <QLPreviewItem> *previewItem;
    UIViewController *previousViewControllerForNavigationItem;
    id /* block */ readyBlock;
    id /* block */ restorePreviousStateBlock;
    BOOL scrubbing;
    BOOL showActionAsDefaultButton;
    BOOL sourceIsManaged;
    unsigned int statusBarWasHidden;
    id strongDelegate;
    QLDismissGestureRecognizer *swipeToDismissGestureRecognizer;
    UIBarButtonItem *titleItem;
    unsigned int toolbarButtonsMask;
    unsigned int toolbarWasHidden;
    BOOL useCustomActionButton;
    int whitePointAdaptivityStyle;
}

- (void).cxx_destruct;
- (id)init;

@end
