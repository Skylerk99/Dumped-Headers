/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {

	NSString* _subcommandName;
	NSMutableArray* _optionArray;

}
+(id)subcommandWithName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)stop;
-(int)run;
-(id)initWithName:(id)arg1 ;
-(void)showHelp;
-(void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6 ;
-(id)optionArray;
-(id)subcommandName;
-(id)formattedHelpHeader;
-(id)formattedHelpFooter;
-(void)addOptions;
-(void)stopDueToSigTerm;
@end

