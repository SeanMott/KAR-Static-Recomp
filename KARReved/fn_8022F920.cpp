//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022F920(PPC::Runtime::GCContext* context)
{
/*8022F920 0022C720*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8022F924 0022C724*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022F928 0022C728*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022F92C 0022C72C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8022F930 0022C730*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8022F934 0022C734*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4C20 @ Get_MemoryOffset_HighBit);
/*8022F938 0022C738*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8022F93C 0022C73C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804B4C20 @ Get_MemoryOffset_LowBit);
/*8022F940 0022C740*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8022F944 0022C744*/ PPC::Runtime::ASM::li(context->r28, 0x3);
/*8022F948 0022C748*/ PPC::Runtime::ASM::li(context->r30, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_8022F94C, 0x8022F94C) //this is a jump label
/*8022F94C 0022C74C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x45);
/*8022F950 0022C750*/ PPC::Runtime::ASM::blt(.L_8022F964);
/*8022F954 0022C754*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xbc);
/*8022F958 0022C758*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x104);
/*8022F95C 0022C75C*/ PPC::Runtime::ASM::li(context->r4, 0x46a);
/*8022F960 0022C760*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022F964, 0x8022F964) //this is a jump label
/*8022F964 0022C764*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x5);
/*8022F968 0022C768*/ PPC::Runtime::ASM::blt(.L_8022F97C);
/*8022F96C 0022C76C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xbc);
/*8022F970 0022C770*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xd0);
/*8022F974 0022C774*/ PPC::Runtime::ASM::li(context->r4, 0x46b);
/*8022F978 0022C778*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022F97C, 0x8022F97C) //this is a jump label
/*8022F97C 0022C77C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8022F980 0022C780*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022F984 0022C784*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x4c8);
/*8022F988 0022C788*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8022F98C 0022C78C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8022F990 0022C790*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x44);
/*8022F994 0022C794*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8022F998 0022C798*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r0);
/*8022F99C 0022C79C*/ PPC::Runtime::ASM::blt(.L_8022F94C);
/*8022F9A0 0022C7A0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8022F9A4 0022C7A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8022F9A8 0022C7A8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8022F9AC 0022C7AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8022F9B0 0022C7B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022F9B4 0022C7B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8022F9B8 0022C7B8*/ PPC::Runtime::ASM::blr();
}