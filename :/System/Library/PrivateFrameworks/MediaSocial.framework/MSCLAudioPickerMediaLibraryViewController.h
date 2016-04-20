/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/MSCLAudioPlayerManagerDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MSCLAudioPickerSourceViewController.h>

@class MSCLAudioPlayerManager, UIImage, MPMediaQuery, UISearchController, MPMediaPredicate, UITableView, NSString;

@interface MSCLAudioPickerMediaLibraryViewController : SKUIViewController <MSCLAudioPlayerManagerDataSource, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, MSCLAudioPickerSourceViewController> {

	MSCLAudioPlayerManager* _audioPlayerManager;
	UIImage* _placeholderImage;
	MPMediaQuery* _query;
	UISearchController* _searchController;
	MPMediaPredicate* _searchPredicate;
	/*^block*/id _selectionBlock;
	UITableView* _tableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id selectionBlock;                       //@synthesize selectionBlock=_selectionBlock - In the implementation block
-(id)initWithQuery:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id)_placeholderImage;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
-(id)audioPlayerManager:(id)arg1 playButtonForRepresentedObject:(id)arg2 ;
-(void)_stopAudioPlayer;
-(void)_reloadWithSearchText:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
@end

