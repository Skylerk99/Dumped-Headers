/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSString, NSDictionary;

@interface MRDRemoteControlCommand : NSObject <NSCopying, NSMutableCopying> {

	unsigned _commandType;
	NSData* _optionsData;
	MROriginRef _origin;
	NSString* _senderAppDisplayID;
	NSString* _destinationAppDisplayID;
	unsigned _appOptions;
	/*^block*/id _completionHandler;
	NSDictionary* _parsedOptionsDict;

}

@property (nonatomic,readonly) unsigned commandType;                                         //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) NSData * optionsData;                                         //@synthesize optionsData=_optionsData - In the implementation block
@property (nonatomic,readonly) MROriginRef origin;                                           //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSString * senderAppDisplayID;                                //@synthesize senderAppDisplayID=_senderAppDisplayID - In the implementation block
@property (nonatomic,readonly) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (nonatomic,readonly) unsigned appOptions;                                          //@synthesize appOptions=_appOptions - In the implementation block
@property (nonatomic,readonly) NSString * routeUID; 
@property (nonatomic,readonly) NSString * contextID; 
@property (getter=isNavigational,nonatomic,readonly) BOOL navigational; 
@property (getter=isContextSensitive,nonatomic,readonly) BOOL contextSensitive; 
@property (nonatomic,readonly) BOOL shouldImplicitlyLaunchApplication; 
@property (nonatomic,readonly) BOOL originatedFromAccessory; 
-(unsigned)appOptions;
-(BOOL)shouldImplicitlyLaunchApplication;
-(BOOL)isContextSensitive;
-(BOOL)isNavigational;
-(NSString *)senderAppDisplayID;
-(id)initWithCommandType:(unsigned)arg1 origin:(MROriginRef)arg2 senderAppDisplayID:(id)arg3 optionsData:(id)arg4 ;
-(BOOL)originatedFromAccessory;
-(id)optionValueForKey:(CFStringRef)arg1 ;
-(NSString *)routeUID;
-(void)dealloc;
-(id)description;
-(/*^block*/id)_completionHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(MROriginRef)origin;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)contextID;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSString *)destinationAppDisplayID;
-(NSData *)optionsData;
-(unsigned)commandType;
@end

