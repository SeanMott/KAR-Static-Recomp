//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80348FB4.hpp"



void fn_80348E40(PPC::Runtime::GCContext* context)
{
/*80348E40 00345C40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80348E44 00345C44*/ PPC::Runtime::ASM::mflr(context->r0);
/*80348E48 00345C48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80348E4C 00345C4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80348E50 00345C50*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80348E54 00345C54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80348E58 00345C58*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80348E5C 00345C5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80348E60 00345C60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80348E64 00345C64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80348E68 00345C68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*80348E6C 00345C6C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80348E70 00345C70*/ PPC::Runtime::ASM::beq(.L_80348E78);
/*80348E74 00345C74*/ PPC::Runtime::ASM::b(.L_80348E7C);
RUNTIME_PPC_JUMP_LABEL(.L_80348E78, 0x80348E78) //this is a jump label
/*80348E78 00345C78*/ PPC::Runtime::ASM::li(context->r4, lbl_805DB220 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80348E7C, 0x80348E7C) //this is a jump label
/*80348E7C 00345C7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80348E80 00345C80*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 80348E84 00345C84  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*80348E88 00345C88*/ PPC::Runtime::ASM::beq(.L_80348EE8);
/*80348E8C 00345C8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80348E90 00345C90*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80348E94 00345C94*/ PPC::Runtime::ASM::beq(.L_80348EE8);
/*80348E98 00345C98*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80348E9C 00345C9C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80348EA0 00345CA0*/ PPC::Runtime::ASM::bl(fn_80348FB4);
/*80348EA4 00345CA4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80348EA8 00345CA8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*80348EAC 00345CAC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80348EB0 00345CB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80348EB4 00345CB4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80348EB8 00345CB8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80348EBC 00345CBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80348EC0 00345CC0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80348EC4 00345CC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E456C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80348EC8 00345CC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80348ECC 00345CCC*/ PPC::Runtime::ASM::ble(.L_80348EE8);
/*80348ED0 00345CD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80348ED4 00345CD4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80348ED8 00345CD8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80348EDC 00345CDC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r12));
/*80348EE0 00345CE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80348EE4 00345CE4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80348EE8, 0x80348EE8) //this is a jump label
/*80348EE8 00345CE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80348EEC 00345CEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80348EF0 00345CF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80348EF4 00345CF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80348EF8 00345CF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80348EFC 00345CFC*/ PPC::Runtime::ASM::blr();
}