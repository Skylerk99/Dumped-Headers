/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIcon.h>
#import <SpringBoard/SBFolderObserver.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class NSMutableArray, SBFolder, NSHashTable, NSMutableSet, NSString;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver> {

	NSMutableArray* _cachedMiniGrids;
	SBFolder* _folder;
	NSHashTable* _nodeObservers;
	NSMutableSet* _finishedDownloadIdentifiers;
	long long _progressState;
	double _progressPercent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_maxIconsInGridImage;
+(Class)_iconGridImageClass;
-(Class)iconImageViewClassForLocation:(int)arg1 ;
-(void)launchFromLocation:(int)arg1 context:(id)arg2 ;
-(id)generateIconImage:(int)arg1 ;
-(id)displayNameForLocation:(int)arg1 ;
-(void)purgeCachedImages;
-(BOOL)isFolderIcon;
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(BOOL)hasFolderIconView;
-(id)getGenericIconImage:(int)arg1 ;
-(void)addNodeObserver:(id)arg1 ;
-(void)_appPlaceholdersDidChange:(id)arg1 ;
-(void)_updateBadgeValue;
-(void)removeNodeObserver:(id)arg1 ;
-(id)gridImages;
-(double)progressPercent;
-(void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2 ;
-(void)_containedIconImageChanged:(id)arg1 ;
-(unsigned long long)listIndexForContainedIcon:(id)arg1 ;
-(unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1 ;
-(id)_miniIconGridForPage:(long long)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(id)initWithFolder:(id)arg1 ;
-(BOOL)progressIsPaused;
-(BOOL)shouldAnimateProgress;
-(void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2 ;
-(void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2 ;
-(id)miniGridCellImageForIcon:(id)arg1 ;
-(void)_updateProgress;
-(void)localeChanged;
-(void)dealloc;
-(NSString *)description;
-(void)updateLabel;
-(id)folder;
-(long long)progressState;
@end

