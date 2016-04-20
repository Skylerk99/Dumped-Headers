/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBWindowHideState : NSObject {

	BOOL _hidden;
	double _desiredAlpha;

}

@property (getter=isHidden) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign) double desiredAlpha;               //@synthesize desiredAlpha=_desiredAlpha - In the implementation block
-(double)desiredAlpha;
-(void)setDesiredAlpha:(double)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
@end

