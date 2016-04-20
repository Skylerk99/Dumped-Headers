/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/SFCollectionViewDelegateLayout.h>
#import <libobjc.A.dylib/SFAirDropBrowserDelegate.h>
#import <libobjc.A.dylib/SFPersonCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/SFWirelessSettingsControllerDelegate.h>

@protocol SFAirDropActivityViewControllerDelegate;
@class NSString, UILabel, SFAirDropIconView, NSLayoutConstraint, SFAirDropActiveIconView, UICollectionView, SFCollectionViewLayout, SFPersonCollectionViewCell, SFAirDropBrowser, NSMutableDictionary, SFWirelessSettingsController, NSMutableSet, NSOperationQueue, NSMutableArray, ALAssetsLibrary, NSObject;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate> {

	long long _attachmentCount;
	NSString* _sessionID;
	long long _sharedItemsRequestID;
	UILabel* _titleLabel;
	SFAirDropIconView* _airDropIconView;
	NSLayoutConstraint* _airDropIconLeftConstraint;
	UILabel* _noWifiLabel;
	NSLayoutConstraint* _noWifiRightConstraint;
	SFAirDropActiveIconView* _airDropActiveIconView;
	NSLayoutConstraint* _airDropActiveIconLeftConstraint;
	UILabel* _instructionsLabel;
	NSLayoutConstraint* _instructionsRightConstraint;
	SFAirDropActiveIconView* _airDropInactiveIconView;
	NSLayoutConstraint* _airDropInactiveIconLeftConstraint;
	UILabel* _noAWDLLabel;
	NSLayoutConstraint* _noAWDLRightConstraint;
	UICollectionView* _collectionView;
	SFCollectionViewLayout* _collectionViewLayout;
	SFPersonCollectionViewCell* _prototypeActivityCell;
	SFAirDropBrowser* _browser;
	id _progressToken;
	NSMutableDictionary* _personToProgress;
	NSMutableDictionary* _personToStoredTransferFinalState;
	NSMutableDictionary* _personToSharedItemsRequestID;
	NSMutableDictionary* _sharedItemsRequestIDToPreviewPhoto;
	SFWirelessSettingsController* _wirelessSettings;
	NSMutableSet* _cachedSharedItems;
	BOOL _itemsRequested;
	BOOL _itemsReady;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _objectChanges;
	ALAssetsLibrary* _assetsLibrary;
	long long _generatedPreviews;
	BOOL _sharedItemsAvailable;
	BOOL _otherActivityViewPresented;
	BOOL _darkStyleOnLegacyApp;
	NSObject*<SFAirDropActivityViewControllerDelegate> _delegate;
	NSString* _overriddenTitleText;
	NSString* _overriddenNoWiFIBTText;
	NSString* _overriddenNoAWDLText;
	NSString* _overriddenInstructionsText;

}

@property (assign,nonatomic,__weak) NSObject*<SFAirDropActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize suggestedThumbnailSize; 
@property (assign,nonatomic) BOOL sharedItemsAvailable;                                                       //@synthesize sharedItemsAvailable=_sharedItemsAvailable - In the implementation block
@property (assign,nonatomic) BOOL otherActivityViewPresented;                                                 //@synthesize otherActivityViewPresented=_otherActivityViewPresented - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                                       //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (nonatomic,copy) NSString * overriddenTitleText;                                                    //@synthesize overriddenTitleText=_overriddenTitleText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoWiFIBTText;                                                 //@synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoAWDLText;                                                   //@synthesize overriddenNoAWDLText=_overriddenNoAWDLText - In the implementation block
@property (nonatomic,copy) NSString * overriddenInstructionsText;                                             //@synthesize overriddenInstructionsText=_overriddenInstructionsText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)airDropActivityCanPerformActivityWithItems:(id)arg1 ;
+(BOOL)isAirDropAvailable;
+(id)classesForItem:(id)arg1 ;
-(BOOL)isWifiEnabled;
-(void)setDelegate:(NSObject*<SFAirDropActivityViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<SFAirDropActivityViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)darkStyleOnLegacyApp;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(BOOL)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(BOOL)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 ;
-(CGSize)suggestedThumbnailSize;
-(void)setNeedsRequestingSharedItems;
-(void)setSharedItemsAvailable:(BOOL)arg1 ;
-(void)setOtherActivityViewPresented:(BOOL)arg1 ;
-(void)stopBrowsing;
-(id)titleText;
-(void)browserWillChangePeople:(id)arg1 ;
-(void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned long long)arg2 ;
-(void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned long long)arg2 ;
-(void)browserDidChangePeople:(id)arg1 ;
-(BOOL)isBluetoothEnabled;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(void)personCollectionViewCellDidStartTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidTerminateTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidFinishTransfer:(id)arg1 ;
-(void)subscribeToProgresses;
-(void)unsubscribeToProgresses;
-(void)startBrowsing;
-(void)updateContentAreaAnimated:(BOOL)arg1 ;
-(id)wifiBtHelpTextLocalizedStringKey;
-(void)enableAirDropRequiredFeatures;
-(id)noWiFiBTText;
-(id)attributedStringWithTitle:(id)arg1 content:(id)arg2 ;
-(id)instructionsText;
-(id)noAWDLText;
-(BOOL)isTetheredModeEnabled;
-(void)startTransferForPeople:(id)arg1 ;
-(void)generateSpecialPreviewPhotoForRequestID:(long long)arg1 ;
-(void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2 ;
-(void)unpublishedProgressForPersonWithRealName:(id)arg1 ;
-(BOOL)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id*)arg3 ;
-(id)cellForPerson:(id)arg1 ;
-(BOOL)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)sharedItemsAvailable;
-(BOOL)otherActivityViewPresented;
-(NSString *)overriddenTitleText;
-(void)setOverriddenTitleText:(NSString *)arg1 ;
-(NSString *)overriddenNoWiFIBTText;
-(void)setOverriddenNoWiFIBTText:(NSString *)arg1 ;
-(NSString *)overriddenNoAWDLText;
-(void)setOverriddenNoAWDLText:(NSString *)arg1 ;
-(NSString *)overriddenInstructionsText;
-(void)setOverriddenInstructionsText:(NSString *)arg1 ;
@end

