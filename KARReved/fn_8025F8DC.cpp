//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025F940.hpp"
#include "fn_8025F9C0.hpp"



void fn_8025F8DC(PPC::Runtime::GCContext* context)
{
/*8025F8DC 0025C6DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F8E0 0025C6E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F8E4 0025C6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F8E8 0025C6E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F8EC 0025C6EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F8F0 0025C6F0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025F8F4 0025C6F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025F8F8 0025C6F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F8FC 0025C6FC*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025F900 0025C700*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025F904 0025C704  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025F908 0025C708*/ PPC::Runtime::ASM::bne(.L_8025F918);
/*8025F90C 0025C70C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F910 0025C710*/ PPC::Runtime::ASM::bl(fn_8025F940);
/*8025F914 0025C714*/ PPC::Runtime::ASM::b(.L_8025F920);
RUNTIME_PPC_JUMP_LABEL(.L_8025F918, 0x8025F918) //this is a jump label
/*8025F918 0025C718*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F91C 0025C71C*/ PPC::Runtime::ASM::bl(fn_8025F9C0);
RUNTIME_PPC_JUMP_LABEL(.L_8025F920, 0x8025F920) //this is a jump label
/*8025F920 0025C720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F924 0025C724*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F928 0025C728*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F92C 0025C72C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F930 0025C730*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F934 0025C734*/ PPC::Runtime::ASM::blr();
}