//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D4E10(PPC::Runtime::GCContext* context)
{
/*800D4E10 000D1C10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D4E14 000D1C14*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D4E18 000D1C18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D4E1C 000D1C1C*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 3);
/*800D4E20 000D1C20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D4E24 000D1C24*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D4E28 000D1C28*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800D4E2C 000D1C2C*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D4E30 000D1C30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r5));
/*800D4E34 000D1C34*/ PPC::Runtime::ASM::lwzx(context->r31, context->r3, context->r0);
/*800D4E38 000D1C38*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800D4E3C 000D1C3C*/ PPC::Runtime::ASM::bne(.L_800D4E50);
/*800D4E40 000D1C40*/ PPC::Runtime::ASM::li(context->r3, lbl_805D609C @ Get_MemoryOffset_SDA21);
/*800D4E44 000D1C44*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*800D4E48 000D1C48*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60A4 @ Get_MemoryOffset_SDA21);
/*800D4E4C 000D1C4C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D4E50, 0x800D4E50) //this is a jump label
/*800D4E50 000D1C50*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800D4E54 000D1C54*/ PPC::Runtime::ASM::beq(.L_800D4E98);
/*800D4E58 000D1C58*/ PPC::Runtime::ASM::bne(.L_800D4E6C);
/*800D4E5C 000D1C5C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D609C @ Get_MemoryOffset_SDA21);
/*800D4E60 000D1C60*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*800D4E64 000D1C64*/ PPC::Runtime::ASM::li(context->r5, lbl_805D60A4 @ Get_MemoryOffset_SDA21);
/*800D4E68 000D1C68*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D4E6C, 0x800D4E6C) //this is a jump label
/*800D4E6C 000D1C6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*800D4E70 000D1C70*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D4E74 000D1C74*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*800D4E78 000D1C78*/ PPC::Runtime::ASM::bne(.L_800D4E88);
/*800D4E7C 000D1C7C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*800D4E80 000D1C80*/ PPC::Runtime::ASM::beq(.L_800D4E88);
/*800D4E84 000D1C84*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D4E88, 0x800D4E88) //this is a jump label
/*800D4E88 000D1C88*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800D4E8C 000D1C8C*/ PPC::Runtime::ASM::beq(.L_800D4E98);
/*800D4E90 000D1C90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D4E94 000D1C94*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_800D4E98, 0x800D4E98) //this is a jump label
/*800D4E98 000D1C98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*800D4E9C 000D1C9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800D4EA0 000D1CA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*800D4EA4 000D1CA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800D4EA8 000D1CA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*800D4EAC 000D1CAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800D4EB0 000D1CB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D4EB4 000D1CB4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D4EB8 000D1CB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D4EBC 000D1CBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D4EC0 000D1CC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D4EC4 000D1CC4*/ PPC::Runtime::ASM::blr();
}