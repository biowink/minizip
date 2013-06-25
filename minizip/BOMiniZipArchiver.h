//
//  BOMiniZipArchiver.h
//  minizip
//
//  Created by BioWink GmbH on 11/22/12.
//  Copyright (c) 2012 BioWink GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface BOMiniZipArchiver : NSObject

- (id)initWithFileURL:(NSURL *)outputURL append:(BOOL)shouldAppend error:(NSError **)error;
- (BOOL)appendFileAtURL:(NSURL *)fileURL error:(NSError **)error;
- (BOOL)finishEncoding:(NSError **)error;

@end
