/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface RadioRecentStationsResponseStationGroup : NSObject {

	NSDictionary* _responseDictionary;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
-(BOOL)isActive;
-(NSString *)localizedTitle;
-(NSArray *)stationDictionaries;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

