/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:47 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSADocumentRoot.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSTResolverContainerNameProvider.h>

@class KNShow, KNThumbnailManager, KNSlidePreviewManager, KNRecordingSyncMaintainer, NSString;

@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSTResolverContainerNameProvider> {

	KNShow* mShow;
	KNThumbnailManager* mThumbnailManager;
	KNSlidePreviewManager* mSlidePreviewManager;
	KNRecordingSyncMaintainer* mRecordingSyncMaintainer;
	BOOL mIsObservingRecording;
	BOOL _isShowcastAllowed;

}

@property (nonatomic,retain) KNShow * show; 
@property (nonatomic,readonly) BOOL isShowcastAllowed;                                           //@synthesize isShowcastAllowed=_isShowcastAllowed - In the implementation block
@property (nonatomic,readonly) KNRecordingSyncMaintainer * recordingSyncMaintainer; 
@property (assign,nonatomic) id<KNDocumentRootDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(DocumentArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const DocumentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)arg1 ;
-(void)documentDidLoad;
-(void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
-(BOOL)isMultiPageForQuickLook;
-(void)willClose;
-(id)createViewStateRootForContinuation:(BOOL)arg1 ;
-(id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id*)arg2 ;
-(long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2 ;
-(id)protected_defaultTextPresetOrdering;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1 ;
-(void)prepareForSavingAsTemplate;
-(BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2 ;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(unsigned long long)writingDirectionForStorage;
-(BOOL)shouldShowComments;
-(void)setThemeForTemplateImport:(id)arg1 ;
-(id)stylesToNotResizeInStylesheet:(id)arg1 ;
-(id)resolverContainerNameForResolver:(id)arg1 ;
-(id)nameForResolverContainer:(id)arg1 ;
-(id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)resolverContainerNamesMatchingPrefix:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2 ;
-(id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2 ;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(void)p_thumbnailUpgradeForUnity20SlideNodes:(id)arg1 andMasterSlideNodess:(id)arg2 ;
-(void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2 ;
-(unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1 ;
-(id)slideNodeForClearedShow;
-(void)changeShowSizeTo:(CGSize)arg1 ;
-(void)preprocessForSaveAsTheme;
-(BOOL)validateUIState:(id)arg1 ;
-(BOOL)isSharedReadOnly;
-(void)p_applicationWillResignActive:(id)arg1 ;
-(void)p_applicationDidBecomeActive:(id)arg1 ;
-(KNRecordingSyncMaintainer *)recordingSyncMaintainer;
-(BOOL)isShowcastAllowed;
-(KNShow *)show;
-(void)setDelegate:(id<KNDocumentRootDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(void)setShow:(KNShow *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)writingDirection;
-(unsigned long long)applicationType;
-(id)childEnumerator;
-(id)theme;
-(id)stylesheet;
-(void)setTheme:(id)arg1 ;
@end

