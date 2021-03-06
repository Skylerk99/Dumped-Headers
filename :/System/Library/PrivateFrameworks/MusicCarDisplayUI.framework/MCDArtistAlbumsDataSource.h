/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDQueryDataSource.h>

@class NSArray, NSMutableDictionary;

@interface MCDArtistAlbumsDataSource : MCDQueryDataSource {

	NSArray* _sectionEntities;
	NSMutableDictionary* _sectionRanges;

}
-(unsigned long long)numberOfSections;
-(BOOL)showsIndexBar;
-(BOOL)usesSections;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1 ;
-(void)removeOverlayCompletionForSectionAtIndex:(unsigned long long)arg1 ;
-(void)overlayCompletionForSectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldShowCompletions;
-(id)entities;
@end

