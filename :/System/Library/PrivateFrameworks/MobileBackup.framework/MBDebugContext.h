/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) long long time; 
@property (nonatomic,retain) NSDate * simulatedDate; 
+(id)defaultDebugContext;
-(BOOL)isFlagSet:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)time;
-(void)setFlag:(id)arg1 ;
-(NSDate *)simulatedDate;
-(void)setValue:(id)arg1 forName:(id)arg2 ;
-(void)removeValueForName:(id)arg1 ;
-(void)setSimulatedDate:(NSDate *)arg1 ;
-(void)setBool:(BOOL)arg1 forName:(id)arg2 ;
-(BOOL)boolForName:(id)arg1 ;
-(void)setInt:(int)arg1 forName:(id)arg2 ;
-(int)intForName:(id)arg1 ;
-(void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3 ;
-(id)performSelectorForName:(id)arg1 ;
-(id)performSelectorForName:(id)arg1 withObject:(id)arg2 ;
-(BOOL)eval:(id)arg1 ;
-(id)valueForName:(id)arg1 ;
@end

