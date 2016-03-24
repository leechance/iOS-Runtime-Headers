/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {
    NSArray *_albumObjectIDs;
    NSSet *_availableAssetIDs;
    NSObject<PhotoLibraryPTPDelegate> *_delegate;
    NSString *_firstDCIMFolderServiced;
    int _libraryStatus;
    PLPhotoLibrary *_photoLibrary;
    NSMutableSet *_ptpDeletedAssets;
    NSObject<OS_dispatch_queue> *availableAssetsQueue;
    NSFileManager *fileManager;
}

@property (nonatomic, readonly, retain) NSArray *albumObjectIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (readonly) unsigned int hash;
@property (readonly, retain) PLManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (id)_allAssetObjectIDs;
- (id)_fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1;
- (BOOL)_isPTPAlbum:(id)arg1;
- (void)_performBlockAndWait:(id /* block */)arg1;
- (void)_performTransactionAndWait:(id /* block */)arg1;
- (id)_ptpInformationForAllAssets;
- (void)_registerForFirstUnlockNotification;
- (id)albumHandles;
- (id)albumObjectIDs;
- (id)assetsInAssociation:(struct NSObject { Class x1; }*)arg1;
- (id)associationsInAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteAsset:(struct NSObject { Class x1; }*)arg1;
- (void)enumeratePTPInformationForFilesInDirectory:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)fileManager;
- (void)handlePhotoLibraryAvailableNotification;
- (id)infoForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)infoForAsset:(struct NSObject { Class x1; }*)arg1;
- (id)init;
- (BOOL)libraryIsAvailable;
- (id)managedObjectContext;
- (void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4;
- (id)photoLibrary;
- (BOOL)ptpCanDeleteFiles;
- (BOOL)ptpDeletePhotoWithKey:(struct NSObject { Class x1; }*)arg1 andExtension:(id)arg2;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (id)ptpInformationForPhotoWithObjectID:(id)arg1;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)ptpThumbnailForPhotoWithKey:(struct NSObject { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileManager:(id)arg1;
- (void)setPtpDelegate:(id)arg1;

@end
