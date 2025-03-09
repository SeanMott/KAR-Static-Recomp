//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80390D74(PPC::Runtime::GCContext* context)
{
/*80390D74 0038DB74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80390D78 0038DB78*/ PPC::Runtime::ASM::mflr(context->r0);
/*80390D7C 0038DB7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80390D80 0038DB80*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r6, 0, 16, 23);
/*80390D84 0038DB84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80390D88 0038DB88*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80390D8C 0038DB8C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80390D90 0038DB90*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80390D94 0038DB94*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80390D98 0038DB98*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80390D9C 0038DB9C*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80390DA0 0038DBA0*/ PPC::Runtime::ASM::beq(.L_80390DC0);
/*80390DA4 0038DBA4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80390DA8 0038DBA8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80390DAC 0038DBAC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x1c);
/*80390DB0 0038DBB0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x18);
/*80390DB4 0038DBB4*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x14);
/*80390DB8 0038DBB8*/ PPC::Runtime::ASM::bl(fn_803D6F00);
/*80390DBC 0038DBBC*/ PPC::Runtime::ASM::b(.L_80390DD8);
RUNTIME_PPC_JUMP_LABEL(.L_80390DC0, 0x80390DC0) //this is a jump label
/*80390DC0 0038DBC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x9);
/*80390DC4 0038DBC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80390DC8 0038DBC8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x1c);
/*80390DCC 0038DBCC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x18);
/*80390DD0 0038DBD0*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x14);
/*80390DD4 0038DBD4*/ PPC::Runtime::ASM::bl(fn_803D6F00);
RUNTIME_PPC_JUMP_LABEL(.L_80390DD8, 0x80390DD8) //this is a jump label
/*80390DD8 0038DBD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80390DDC 0038DBDC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*80390DE0 0038DBE0*/ PPC::Runtime::ASM::li(context->r5, 0x200);
/*80390DE4 0038DBE4*/ PPC::Runtime::ASM::li(context->r6, 0x200);
/*80390DE8 0038DBE8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80390DEC 0038DBEC*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80390DF0 0038DBF0*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80390DF4 0038DBF4*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*80390DF8 0038DBF8*/ PPC::Runtime::ASM::bl(fn_GXInitTexObj);
/*80390DFC 0038DBFC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*80390E00 0038DC00*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80390E04 0038DC04*/ PPC::Runtime::ASM::bl(fn_GXLoadTexObj);
/*80390E08 0038DC08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80390E0C 0038DC0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*80390E10 0038DC10*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80390E14 0038DC14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80390E18 0038DC18*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*80390E1C 0038DC1C*/ PPC::Runtime::ASM::bl(fn_GXInvalidateVtxCache);
/*80390E20 0038DC20*/ PPC::Runtime::ASM::bl(fn_GXClearVtxDesc);
/*80390E24 0038DC24*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390E28 0038DC28*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*80390E2C 0038DC2C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80390E30 0038DC30*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80390E34 0038DC34*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80390E38 0038DC38*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*80390E3C 0038DC3C*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*80390E40 0038DC40*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80390E44 0038DC44*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*80390E48 0038DC48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390E4C 0038DC4C*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*80390E50 0038DC50*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80390E54 0038DC54*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*80390E58 0038DC58*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80390E5C 0038DC5C*/ PPC::Runtime::ASM::bl(fn_GXSetVtxAttrFmt);
/*80390E60 0038DC60*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*80390E64 0038DC64*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80390E68 0038DC68*/ PPC::Runtime::ASM::bl(fn_GXSetVtxDesc);
/*80390E6C 0038DC6C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80390E70 0038DC70*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80390E74 0038DC74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80390E78 0038DC78*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*80390E7C 0038DC7C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*80390E80 0038DC80*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80390E84 0038DC84*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80390E88 0038DC88*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80390E8C 0038DC8C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80390E90 0038DC90*/ PPC::Runtime::ASM::bctrl();
/*80390E94 0038DC94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80390E98 0038DC98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80390E9C 0038DC9C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80390EA0 0038DCA0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80390EA4 0038DCA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80390EA8 0038DCA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80390EAC 0038DCAC*/ PPC::Runtime::ASM::blr();
}