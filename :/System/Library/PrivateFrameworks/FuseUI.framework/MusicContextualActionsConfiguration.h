/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@protocol MusicEntityProviding;
@class MusicViewControllerPresenter, MusicClientContext, MusicEntityValueContext, NSArray, NSDictionary, NSString, SKUIClientContext;

@interface MusicContextualActionsConfiguration : NSObject <MusicClientContextConsuming> {

	MusicViewControllerPresenter* _presenter;
	BOOL _allowsAddToPlaylistActions;
	BOOL _allowsCreateGeniusPlaylist;
	BOOL _allowsShowGeniusPlaylistDetail;
	BOOL _allowsLibraryAddRemoveActions;
	BOOL _allowsLibraryKeepLocalActions;
	BOOL _allowsUpNextActions;
	BOOL _allowsShareActions;
	BOOL _allowsStartRadioActions;
	BOOL _allowsShowInStoreActions;
	BOOL _includesPostActionForDefaultContainer;
	MusicClientContext* _clientContext;
	MusicEntityValueContext* _entityValueContext;
	NSArray* _customJSActionTitles;
	/*^block*/id _didDismissHandler;
	id<MusicEntityProviding> _libraryAddRemoveOverrideItemEntityProvider;
	long long _preferredAlertControllerStyle;
	NSDictionary* _extraInfo;

}

@property (nonatomic,retain) MusicEntityValueContext * entityValueContext;                                     //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (assign,nonatomic) BOOL allowsAddToPlaylistActions;                                                  //@synthesize allowsAddToPlaylistActions=_allowsAddToPlaylistActions - In the implementation block
@property (assign,nonatomic) BOOL allowsCreateGeniusPlaylist;                                                  //@synthesize allowsCreateGeniusPlaylist=_allowsCreateGeniusPlaylist - In the implementation block
@property (assign,nonatomic) BOOL allowsShowGeniusPlaylistDetail;                                              //@synthesize allowsShowGeniusPlaylistDetail=_allowsShowGeniusPlaylistDetail - In the implementation block
@property (assign,nonatomic) BOOL allowsLibraryAddRemoveActions;                                               //@synthesize allowsLibraryAddRemoveActions=_allowsLibraryAddRemoveActions - In the implementation block
@property (assign,nonatomic) BOOL allowsLibraryKeepLocalActions;                                               //@synthesize allowsLibraryKeepLocalActions=_allowsLibraryKeepLocalActions - In the implementation block
@property (assign,nonatomic) BOOL allowsUpNextActions;                                                         //@synthesize allowsUpNextActions=_allowsUpNextActions - In the implementation block
@property (assign,nonatomic) BOOL allowsShareActions;                                                          //@synthesize allowsShareActions=_allowsShareActions - In the implementation block
@property (assign,nonatomic) BOOL allowsStartRadioActions;                                                     //@synthesize allowsStartRadioActions=_allowsStartRadioActions - In the implementation block
@property (assign,nonatomic) BOOL allowsShowInStoreActions;                                                    //@synthesize allowsShowInStoreActions=_allowsShowInStoreActions - In the implementation block
@property (nonatomic,retain) NSArray * customJSActionTitles;                                                   //@synthesize customJSActionTitles=_customJSActionTitles - In the implementation block
@property (nonatomic,copy) id didDismissHandler;                                                               //@synthesize didDismissHandler=_didDismissHandler - In the implementation block
@property (nonatomic,retain) id<MusicEntityProviding> libraryAddRemoveOverrideItemEntityProvider;              //@synthesize libraryAddRemoveOverrideItemEntityProvider=_libraryAddRemoveOverrideItemEntityProvider - In the implementation block
@property (assign,nonatomic) long long preferredAlertControllerStyle;                                          //@synthesize preferredAlertControllerStyle=_preferredAlertControllerStyle - In the implementation block
@property (assign,nonatomic) BOOL includesPostActionForDefaultContainer;                                       //@synthesize includesPostActionForDefaultContainer=_includesPostActionForDefaultContainer - In the implementation block
@property (nonatomic,retain) NSDictionary * extraInfo;                                                         //@synthesize extraInfo=_extraInfo - In the implementation block
@property (nonatomic,readonly) MusicViewControllerPresenter * presenter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)defaultEntityValueContext;
-(id)init;
-(MusicEntityValueContext *)entityValueContext;
-(id)newViewController;
-(NSDictionary *)extraInfo;
-(void)setExtraInfo:(NSDictionary *)arg1 ;
-(void)setEntityValueContext:(MusicEntityValueContext *)arg1 ;
-(void)configureWithPresentationViewController:(id)arg1 popoverTarget:(id)arg2 ;
-(NSArray *)customJSActionTitles;
-(void)setCustomJSActionTitles:(NSArray *)arg1 ;
-(MusicViewControllerPresenter *)presenter;
-(void)setLibraryAddRemoveOverrideItemEntityProvider:(id<MusicEntityProviding>)arg1 ;
-(void)setAllowsShowGeniusPlaylistDetail:(BOOL)arg1 ;
-(id)_newContextualActionsAlertController;
-(void)_getAdditionalPresentationHandler:(/*^block*/id*)arg1 shouldDismissHandler:(/*^block*/id*)arg2 forAlertController:(id)arg3 ;
-(SCD_Struct_Mu12)_headerSelectionHandlingInformation;
-(void)_didSelectHeaderFromAlertController:(id)arg1 ;
-(id)newShareViewController;
-(BOOL)allowsAddToPlaylistActions;
-(void)setAllowsAddToPlaylistActions:(BOOL)arg1 ;
-(BOOL)allowsCreateGeniusPlaylist;
-(void)setAllowsCreateGeniusPlaylist:(BOOL)arg1 ;
-(BOOL)allowsShowGeniusPlaylistDetail;
-(BOOL)allowsLibraryAddRemoveActions;
-(void)setAllowsLibraryAddRemoveActions:(BOOL)arg1 ;
-(BOOL)allowsLibraryKeepLocalActions;
-(void)setAllowsLibraryKeepLocalActions:(BOOL)arg1 ;
-(BOOL)allowsUpNextActions;
-(void)setAllowsUpNextActions:(BOOL)arg1 ;
-(BOOL)allowsShareActions;
-(void)setAllowsShareActions:(BOOL)arg1 ;
-(BOOL)allowsStartRadioActions;
-(void)setAllowsStartRadioActions:(BOOL)arg1 ;
-(BOOL)allowsShowInStoreActions;
-(void)setAllowsShowInStoreActions:(BOOL)arg1 ;
-(id)didDismissHandler;
-(void)setDidDismissHandler:(id)arg1 ;
-(id<MusicEntityProviding>)libraryAddRemoveOverrideItemEntityProvider;
-(long long)preferredAlertControllerStyle;
-(void)setPreferredAlertControllerStyle:(long long)arg1 ;
-(BOOL)includesPostActionForDefaultContainer;
-(void)setIncludesPostActionForDefaultContainer:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

