/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKACReadArguments : NSObject {

	SEL _selector;
	id _target;
	void* _argument;
	id _argument2;

}

@property (nonatomic,readonly) SEL selector;                //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) id target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) void* argument;              //@synthesize argument=_argument - In the implementation block
@property (nonatomic,readonly) id argument2;                //@synthesize argument2=_argument2 - In the implementation block
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void*)arg3 ;
-(id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void*)arg3 argument2:(id)arg4 ;
-(id)argument2;
-(void*)argument;
-(void)dealloc;
-(id)target;
-(SEL)selector;
@end

