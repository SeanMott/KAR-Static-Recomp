//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80413BD4.hpp"



void fn_80413DB8(PPC::Runtime::GCContext* context)
{
/*80413DB8 00410BB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80413DBC 00410BBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80413DC0 00410BC0*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80413DC4 00410BC4*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80413DC8 00410BC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80413DCC 00410BCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80413DD0 00410BD0*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*80413DD4 00410BD4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x64);
/*80413DD8 00410BD8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x5b4);
/*80413DDC 00410BDC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x110);
/*80413DE0 00410BE0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x110);
/*80413DE4 00410BE4*/ PPC::Runtime::ASM::bl(fn_80413BD4);
/*80413DE8 00410BE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503F08 @ Get_MemoryOffset_HighBit);
/*80413DEC 00410BEC*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80413DF0 00410BF0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80503F08 @ Get_MemoryOffset_LowBit);
/*80413DF4 00410BF4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80413DF8 00410BF8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x5b4);
/*80413DFC 00410BFC*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x4);
/*80413E00 00410C00*/ PPC::Runtime::ASM::subi(context->r7, context->r3, 0x4);
/*80413E04 00410C04*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80413E08 00410C08*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80413E0C, 0x80413E0C) //this is a jump label
/*80413E0C 00410C0C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413E10 00410C10*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80413E14 00410C14*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80413E18 00410C18*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80413E1C 00410C1C*/ PPC::Runtime::ASM::bdnz(.L_80413E0C);
/*80413E20 00410C20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413E24 00410C24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_80413E28, 0x80413E28) //this is a jump label
/*80413E28 00410C28*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r4));
/*80413E2C 00410C2C*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*80413E30 00410C30*/ PPC::Runtime::ASM::cmpwi(context->r6, -0x1);
/*80413E34 00410C34*/ PPC::Runtime::ASM::beq(.L_80413E8C);
/*80413E38 00410C38*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r4));
/*80413E3C 00410C3C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x1);
/*80413E40 00410C40*/ PPC::Runtime::ASM::slwi(context->r6, context->r0, 2);
/*80413E44 00410C44*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x5b4);
/*80413E48 00410C48*/ PPC::Runtime::ASM::extsb(context->r7, context->r7);
/*80413E4C 00410C4C*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80413E50 00410C50*/ PPC::Runtime::ASM::add(context->r6, context->r7, context->r6);
/*80413E54 00410C54*/ PPC::Runtime::ASM::subi(context->r8, context->r5, 0x4);
/*80413E58 00410C58*/ PPC::Runtime::ASM::mulli(context->r6, context->r6, 0x44);
/*80413E5C 00410C5C*/ PPC::Runtime::ASM::add(context->r9, context->r9, context->r6);
/*80413E60 00410C60*/ PPC::Runtime::ASM::subi(context->r7, context->r9, 0x4);
/*80413E64 00410C64*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80413E68, 0x80413E68) //this is a jump label
/*80413E68 00410C68*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413E6C 00410C6C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80413E70 00410C70*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80413E74 00410C74*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80413E78 00410C78*/ PPC::Runtime::ASM::bdnz(.L_80413E68);
/*80413E7C 00410C7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413E80 00410C80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80413E84 00410C84*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r9));
/*80413E88 00410C88*/ PPC::Runtime::ASM::b(.L_80413EB8);
RUNTIME_PPC_JUMP_LABEL(.L_80413E8C, 0x80413E8C) //this is a jump label
/*80413E8C 00410C8C*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80413E90 00410C90*/ PPC::Runtime::ASM::subi(context->r8, context->r5, 0x4);
/*80413E94 00410C94*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x4);
/*80413E98 00410C98*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80413E9C, 0x80413E9C) //this is a jump label
/*80413E9C 00410C9C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413EA0 00410CA0*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80413EA4 00410CA4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80413EA8 00410CA8*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80413EAC 00410CAC*/ PPC::Runtime::ASM::bdnz(.L_80413E9C);
/*80413EB0 00410CB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80413EB4 00410CB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_80413EB8, 0x80413EB8) //this is a jump label
/*80413EB8 00410CB8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80413EBC 00410CBC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x44);
/*80413EC0 00410CC0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80413EC4 00410CC4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*80413EC8 00410CC8*/ PPC::Runtime::ASM::blt(.L_80413E28);
/*80413ECC 00410CCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80413ED0 00410CD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80413ED4 00410CD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80413ED8 00410CD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80413EDC 00410CDC*/ PPC::Runtime::ASM::blr();
}