/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject {

	AugmentableInspectorController* _inspectorController;
	RetainPtr<RWIProtocolConfiguration>* _configuration;
	unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient> >* _inspectorControllerClient;

}

@property (nonatomic,readonly) RWIProtocolConfiguration * configuration; 
@property (nonatomic,readonly) BOOL connected; 
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(RWIProtocolConfiguration *)configuration;
-(BOOL)connected;
@end

