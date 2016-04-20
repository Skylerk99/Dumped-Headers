/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKHideableBottomSeparator.h>

@protocol MKPlaceActionsViewControllerDelegate;
@class NSArray, MKMapItem, NSString;

@interface MKPlaceActionsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKHideableBottomSeparator> {

	BOOL _showContactActions;
	BOOL _showRemovePin;
	BOOL _showReportAProblem;
	BOOL _showSharing;
	BOOL _showSimulateLocation;
	BOOL _showOpenInSkyline;
	BOOL _viewShouldHideBottommostSeparator;
	NSArray* _actions;
	id<MKPlaceActionsViewControllerDelegate> _actionDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceActionsViewControllerDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic) BOOL showContactActions;                                                     //@synthesize showContactActions=_showContactActions - In the implementation block
@property (assign,nonatomic) BOOL showRemovePin;                                                          //@synthesize showRemovePin=_showRemovePin - In the implementation block
@property (assign,nonatomic) BOOL showReportAProblem;                                                     //@synthesize showReportAProblem=_showReportAProblem - In the implementation block
@property (assign,nonatomic) BOOL showSharing;                                                            //@synthesize showSharing=_showSharing - In the implementation block
@property (assign,nonatomic) BOOL showSimulateLocation;                                                   //@synthesize showSimulateLocation=_showSimulateLocation - In the implementation block
@property (assign,nonatomic) BOOL showOpenInSkyline;                                                      //@synthesize showOpenInSkyline=_showOpenInSkyline - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                                           //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
@property (assign,nonatomic) BOOL viewShouldHideBottommostSeparator;                                      //@synthesize viewShouldHideBottommostSeparator=_viewShouldHideBottommostSeparator - In the implementation block
-(void)setShowContactActions:(BOOL)arg1 ;
-(BOOL)showReportAProblem;
-(BOOL)showRemovePin;
-(void)setShowReportAProblem:(BOOL)arg1 ;
-(BOOL)showOpenInSkyline;
-(void)setShowSimulateLocation:(BOOL)arg1 ;
-(BOOL)showSimulateLocation;
-(void)setShowOpenInSkyline:(BOOL)arg1 ;
-(BOOL)showContactActions;
-(void)setShowRemovePin:(BOOL)arg1 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(BOOL)viewShouldHideBottommostSeparator;
-(void)setViewShouldHideBottommostSeparator:(BOOL)arg1 ;
-(id<MKPlaceActionsViewControllerDelegate>)actionDelegate;
-(BOOL)showSharing;
-(void)setShowSharing:(BOOL)arg1 ;
-(void)updateActions;
-(void)setActionDelegate:(id<MKPlaceActionsViewControllerDelegate>)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)actions;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

