/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {

	NSArray* _affectedStores;

}

@property (nonatomic,retain) NSArray * affectedStores; 
@property (readonly) unsigned long long requestType; 
+(void)initialize;
-(NSArray *)affectedStores;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(unsigned long long)requestType;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

