//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80204FAC.hpp"
#include "fn_80204FAC.hpp"
#include "fn_802042FC.hpp"



void fn_8020F920(PPC::Runtime::GCContext* context)
{
/*8020F920 0020C720*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F924 0020C724*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F928 0020C728*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F92C 0020C72C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F930 0020C730*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020F934 0020C734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8020F938 0020C738*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x32);
/*8020F93C 0020C73C*/ PPC::Runtime::ASM::beq(.L_8020F968);
/*8020F940 0020C740*/ PPC::Runtime::ASM::bge(.L_8020F95C);
/*8020F944 0020C744*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1b);
/*8020F948 0020C748*/ PPC::Runtime::ASM::beq(.L_8020F978);
/*8020F94C 0020C74C*/ PPC::Runtime::ASM::bge(.L_8020F98C);
/*8020F950 0020C750*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1a);
/*8020F954 0020C754*/ PPC::Runtime::ASM::bge(.L_8020F968);
/*8020F958 0020C758*/ PPC::Runtime::ASM::b(.L_8020F98C);
RUNTIME_PPC_JUMP_LABEL(.L_8020F95C, 0x8020F95C) //this is a jump label
/*8020F95C 0020C75C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x34);
/*8020F960 0020C760*/ PPC::Runtime::ASM::bge(.L_8020F98C);
/*8020F964 0020C764*/ PPC::Runtime::ASM::b(.L_8020F978);
RUNTIME_PPC_JUMP_LABEL(.L_8020F968, 0x8020F968) //this is a jump label
/*8020F968 0020C768*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r31));
/*8020F96C 0020C76C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F970 0020C770*/ PPC::Runtime::ASM::bl(fn_80204FAC);
/*8020F974 0020C774*/ PPC::Runtime::ASM::b(.L_8020F98C);
RUNTIME_PPC_JUMP_LABEL(.L_8020F978, 0x8020F978) //this is a jump label
/*8020F978 0020C778*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2518 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F97C 0020C77C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F980 0020C780*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*8020F984 0020C784*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*8020F988 0020C788*/ PPC::Runtime::ASM::bl(fn_80204FAC);
RUNTIME_PPC_JUMP_LABEL(.L_8020F98C, 0x8020F98C) //this is a jump label
/*8020F98C 0020C78C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8020F990 0020C790*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*8020F994 0020C794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F998 0020C798*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F99C 0020C79C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F9A0 0020C7A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F9A4 0020C7A4*/ PPC::Runtime::ASM::blr();
}