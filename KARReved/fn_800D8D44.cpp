//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802440AC.hpp"
#include "fn_802440FC.hpp"
#include "fn_80062CA4.hpp"



void fn_800D8D44(PPC::Runtime::GCContext* context)
{
/*800D8D44 000D5B44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800D8D48 000D5B48*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D8D4C 000D5B4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800D8D50 000D5B50*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800D8D54 000D5B54*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800D8D58 000D5B58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D8D5C 000D5B5C*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 6);
/*800D8D60 000D5B60*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*800D8D64 000D5B64*/ PPC::Runtime::ASM::mr(context->r26, context->r6);
/*800D8D68 000D5B68*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D8D6C 000D5B6C*/ PPC::Runtime::ASM::mr(context->r27, context->r7);
/*800D8D70 000D5B70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*800D8D74 000D5B74*/ PPC::Runtime::ASM::mr(context->r28, context->r8);
/*800D8D78 000D5B78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*800D8D7C 000D5B7C*/ PPC::Runtime::ASM::mr(context->r29, context->r9);
/*800D8D80 000D5B80*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 26, 26);
/*800D8D84 000D5B84*/ PPC::Runtime::ASM::mr(context->r30, context->r10);
/*800D8D88 000D5B88*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x20);
/*800D8D8C 000D5B8C*/ PPC::Runtime::ASM::beq(.L_800D8DD4);
/*800D8D90 000D5B90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D8D94 000D5B94*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800D8D98 000D5B98*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800D8D9C 000D5B9C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800D8DA0 000D5BA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*800D8DA4 000D5BA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*800D8DA8 000D5BA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D8DAC 000D5BAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800D8DB0 000D5BB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*800D8DB4 000D5BB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800D8DB8 000D5BB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800D8DBC 000D5BBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800D8DC0 000D5BC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D8DC4 000D5BC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800D8DC8 000D5BC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800D8DCC 000D5BCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800D8DD0 000D5BD0*/ PPC::Runtime::ASM::b(.L_800D8EC4);
RUNTIME_PPC_JUMP_LABEL(.L_800D8DD4, 0x800D8DD4) //this is a jump label
/*800D8DD4 000D5BD4*/ PPC::Runtime::ASM::mr(context->r5, context->r25);
/*800D8DD8 000D5BD8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*800D8DDC 000D5BDC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2c);
/*800D8DE0 000D5BE0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*800D8DE4 000D5BE4*/ PPC::Runtime::ASM::bl(fn_802440AC);
/*800D8DE8 000D5BE8*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*800D8DEC 000D5BEC*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*800D8DF0 000D5BF0*/ PPC::Runtime::ASM::mr(context->r7, context->r29);
/*800D8DF4 000D5BF4*/ PPC::Runtime::ASM::mr(context->r8, context->r30);
/*800D8DF8 000D5BF8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*800D8DFC 000D5BFC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2c);
/*800D8E00 000D5C00*/ PPC::Runtime::ASM::bl(fn_802440FC);
/*800D8E04 000D5C04*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D8E08 000D5C08*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*800D8E0C 000D5C0C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF62C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D8E10 000D5C10*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*800D8E14 000D5C14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800D8E18 000D5C18*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D8E1C 000D5C1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800D8E20 000D5C20*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*800D8E24 000D5C24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800D8E28 000D5C28*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D8E2C 000D5C2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*800D8E30 000D5C30*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*800D8E34 000D5C34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800D8E38 000D5C38*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800D8E3C 000D5C3C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*800D8E40 000D5C40*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800D8E44 000D5C44*/ PPC::Runtime::ASM::beq(.L_800D8E90);
/*800D8E48 000D5C48*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D8E4C 000D5C4C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800D8E50 000D5C50*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800D8E54 000D5C54*/ PPC::Runtime::ASM::beq(.L_800D8E90);
/*800D8E58 000D5C58*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800D8E5C 000D5C5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*800D8E60 000D5C60*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800D8E64 000D5C64*/ PPC::Runtime::ASM::beq(.L_800D8E90);
/*800D8E68 000D5C68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800D8E6C 000D5C6C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800D8E70 000D5C70*/ PPC::Runtime::ASM::beq(.L_800D8E90);
/*800D8E74 000D5C74*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800D8E78 000D5C78*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*800D8E7C 000D5C7C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*800D8E80 000D5C80*/ PPC::Runtime::ASM::beq(.L_800D8E90);
/*800D8E84 000D5C84*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800D8E88 000D5C88*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*800D8E8C 000D5C8C*/ PPC::Runtime::ASM::bne(.L_800D8E98);
RUNTIME_PPC_JUMP_LABEL(.L_800D8E90, 0x800D8E90) //this is a jump label
/*800D8E90 000D5C90*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D8E94 000D5C94*/ PPC::Runtime::ASM::b(.L_800D8E9C);
RUNTIME_PPC_JUMP_LABEL(.L_800D8E98, 0x800D8E98) //this is a jump label
/*800D8E98 000D5C98*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D8E9C, 0x800D8E9C) //this is a jump label
/*800D8E9C 000D5C9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D8EA0 000D5CA0*/ PPC::Runtime::ASM::bne(.L_800D8EB4);
/*800D8EA4 000D5CA4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*800D8EA8 000D5CA8*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800D8EAC 000D5CAC*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*800D8EB0 000D5CB0*/ PPC::Runtime::ASM::b(.L_800D8EC4);
RUNTIME_PPC_JUMP_LABEL(.L_800D8EB4, 0x800D8EB4) //this is a jump label
/*800D8EB4 000D5CB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D8EB8 000D5CB8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*800D8EBC 000D5CBC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*800D8EC0 000D5CC0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_800D8EC4, 0x800D8EC4) //this is a jump label
/*800D8EC4 000D5CC4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800D8EC8 000D5CC8*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800D8ECC 000D5CCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800D8ED0 000D5CD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D8ED4 000D5CD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800D8ED8 000D5CD8*/ PPC::Runtime::ASM::blr();
}