//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025E6A8.hpp"
#include "fn_8025E728.hpp"



void fn_8025E644(PPC::Runtime::GCContext* context)
{
/*8025E644 0025B444*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025E648 0025B448*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025E64C 0025B44C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E650 0025B450*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025E654 0025B454*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025E658 0025B458*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025E65C 0025B45C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025E660 0025B460*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025E664 0025B464*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025E668 0025B468*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025E66C 0025B46C  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025E670 0025B470*/ PPC::Runtime::ASM::bne(.L_8025E680);
/*8025E674 0025B474*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025E678 0025B478*/ PPC::Runtime::ASM::bl(fn_8025E6A8);
/*8025E67C 0025B47C*/ PPC::Runtime::ASM::b(.L_8025E688);
RUNTIME_PPC_JUMP_LABEL(.L_8025E680, 0x8025E680) //this is a jump label
/*8025E680 0025B480*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025E684 0025B484*/ PPC::Runtime::ASM::bl(fn_8025E728);
RUNTIME_PPC_JUMP_LABEL(.L_8025E688, 0x8025E688) //this is a jump label
/*8025E688 0025B488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025E68C 0025B48C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025E690 0025B490*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025E694 0025B494*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025E698 0025B498*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025E69C 0025B49C*/ PPC::Runtime::ASM::blr();
}