//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___kernel_tan.hpp"
#include "fn___ieee754_rem_pio2.hpp"
#include "fn___kernel_tan.hpp"



void fn_tan(PPC::Runtime::GCContext* context)
{
/*803BD310 003BA110*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803BD314 003BA114*/ PPC::Runtime::ASM::mflr(context->r0);
/*803BD318 003BA118*/ PPC::Runtime::ASM::lis(context->r3, 0x3fe9);
/*803BD31C 003BA11C*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD320 003BA120*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BD324 003BA124*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x21fb);
/*803BD328 003BA128*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803BD32C 003BA12C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 1);
/*803BD330 003BA130*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*803BD334 003BA134*/ PPC::Runtime::ASM::bgt(.L_803BD348);
/*803BD338 003BA138*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803BD33C 003BA13C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803BD340 003BA140*/ PPC::Runtime::ASM::bl(fn___kernel_tan);
/*803BD344 003BA144*/ PPC::Runtime::ASM::b(.L_803BD378);
RUNTIME_PPC_JUMP_LABEL(.L_803BD348, 0x803BD348) //this is a jump label
/*803BD348 003BA148*/ PPC::Runtime::ASM::lis(context->r0, 0x7ff0);
/*803BD34C 003BA14C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*803BD350 003BA150*/ PPC::Runtime::ASM::blt(.L_803BD35C);
/*803BD354 003BA154*/ PPC::Runtime::ASM::fsub(context->f1, context->f1, context->f1);
/*803BD358 003BA158*/ PPC::Runtime::ASM::b(.L_803BD378);
RUNTIME_PPC_JUMP_LABEL(.L_803BD35C, 0x803BD35C) //this is a jump label
/*803BD35C 003BA15C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803BD360 003BA160*/ PPC::Runtime::ASM::bl(fn___ieee754_rem_pio2);
/*803BD364 003BA164*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r3, 31, 1);
/*803BD368 003BA168*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803BD36C 003BA16C*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803BD370 003BA170*/ PPC::Runtime::ASM::subfic(context->r3, context->r0, 0x1);
/*803BD374 003BA174*/ PPC::Runtime::ASM::bl(fn___kernel_tan);
RUNTIME_PPC_JUMP_LABEL(.L_803BD378, 0x803BD378) //this is a jump label
/*803BD378 003BA178*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803BD37C 003BA17C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803BD380 003BA180*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803BD384 003BA184*/ PPC::Runtime::ASM::blr();
}