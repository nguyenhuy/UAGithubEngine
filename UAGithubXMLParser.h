//
//  UAGithubXMLParser.h
//  UAGithubEngine
//
//  Created by Owain Hunt on 05/04/2010.
//  Copyright 2010 Owain R Hunt. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "UAGithubParserDelegate.h"
#import "UAGithubEngineRequestTypes.h"


@interface UAGithubXMLParser : NSObject {
	id <UAGithubParserDelegate> delegate;
    NSString *identifier;
    UAGithubRequestType requestType;
    NSData *xml;
    NSMutableArray *parsedObjects;
    NSXMLParser *parser;
    __weak NSMutableDictionary *currentNode;
    NSString *lastOpenedElement;
	
	NSString *baseElement;
	NSArray *numberElements;
	NSArray *boolElements;
	NSArray *dateElements;
	NSArray *parentElements;

}

@property (nonatomic, retain) NSString *lastOpenedElement;

- (id)initWithXML:(NSData *)theXML delegate:(id)theDelegate requestType:(UAGithubRequestType)reqType;

@end