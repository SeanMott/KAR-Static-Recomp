//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801268A0.hpp"



void fn_80126B1C(PPC::Runtime::GCContext* context)
{
/*80126B1C 0012391C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80126B20 00123920*/ PPC::Runtime::ASM::mflr(context->r0);
/*80126B24 00123924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80126B28 00123928*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80126B2C 0012392C*/ PPC::Runtime::ASM::li(context->r31, 0x3);
RUNTIME_PPC_JUMP_LABEL(.L_80126B30, 0x80126B30) //this is a jump label
/*80126B30 00123930*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80126B34 00123934*/ PPC::Runtime::ASM::bl(fn_801268A0);
/* 80126B38 00123938  37 FF FF FF */ subic. context->r31 , context->r31 , 0x1
/*80126B3C 0012393C*/ PPC::Runtime::ASM::bge(.L_80126B30);
/*80126B40 00123940*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80126B44 00123944*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80126B48 00123948*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80126B4C 0012394C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80126B50 00123950*/ PPC::Runtime::ASM::blr();
}