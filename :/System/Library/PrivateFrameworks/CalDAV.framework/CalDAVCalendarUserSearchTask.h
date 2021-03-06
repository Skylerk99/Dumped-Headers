/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask {

	BOOL _findAttendees;
	BOOL _findLocations;
	BOOL _findUsers;
	BOOL _findGroups;
	BOOL _findResources;
	unsigned long long _resultLimit;
	NSSet* _searchStrings;

}

@property (assign,nonatomic) BOOL findAttendees;                          //@synthesize findAttendees=_findAttendees - In the implementation block
@property (assign,nonatomic) BOOL findLocations;                          //@synthesize findLocations=_findLocations - In the implementation block
@property (assign) BOOL findUsers;                                        //@synthesize findUsers=_findUsers - In the implementation block
@property (assign) BOOL findGroups;                                       //@synthesize findGroups=_findGroups - In the implementation block
@property (assign) BOOL findResources;                                    //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
@property (nonatomic,retain) NSSet * searchStrings;                       //@synthesize searchStrings=_searchStrings - In the implementation block
+(BOOL)tokensAreLegal:(id)arg1 ;
-(BOOL)findGroups;
-(BOOL)findLocations;
-(BOOL)findResources;
-(BOOL)findUsers;
-(void)setFindGroups:(BOOL)arg1 ;
-(void)setFindResources:(BOOL)arg1 ;
-(void)setFindUsers:(BOOL)arg1 ;
-(void)setFindLocations:(BOOL)arg1 ;
-(id)searchItems;
-(id)extraAttributes;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(unsigned long long)resultLimit;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(void)setFindAttendees:(BOOL)arg1 ;
-(BOOL)findAttendees;
-(id)initWithSearchStrings:(id)arg1 atURL:(id)arg2 ;
-(id)httpMethod;
-(id)requestBody;
-(NSSet *)searchStrings;
@end

