//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80460D34(PPC::Runtime::GCContext* context)
{
/*80460D34 0045DB34*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x6261);
/*80460D38 0045DB38*/ PPC::Runtime::ASM::addi(context->r8, context->r3, 0x7729);
/*80460D3C 0045DB3C*/ PPC::Runtime::ASM::addi(context->r9, context->r3, 0x6cc5);
/*80460D40 0045DB40*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80460D44 0045DB44*/ PPC::Runtime::ASM::b(.L_80460DAC);
RUNTIME_PPC_JUMP_LABEL(.L_80460D48, 0x80460D48) //this is a jump label
/*80460D48 0045DB48*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80460D4C 0045DB4C*/ PPC::Runtime::ASM::b(.L_80460D8C);
RUNTIME_PPC_JUMP_LABEL(.L_80460D50, 0x80460D50) //this is a jump label
/*80460D50 0045DB50*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80460D54 0045DB54*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*80460D58 0045DB58*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*80460D5C 0045DB5C*/ PPC::Runtime::ASM::ble(.L_80460D74);
/*80460D60 0045DB60*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80460D64 0045DB64*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80460D68 0045DB68*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80460D6C 0045DB6C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*80460D70 0045DB70*/ PPC::Runtime::ASM::b(.L_80460D84);
RUNTIME_PPC_JUMP_LABEL(.L_80460D74, 0x80460D74) //this is a jump label
/*80460D74 0045DB74*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80460D78 0045DB78*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80460D7C 0045DB7C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*80460D80 0045DB80*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80460D84, 0x80460D84) //this is a jump label
/*80460D84 0045DB84*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80460D88 0045DB88*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80460D8C, 0x80460D8C) //this is a jump label
/*80460D8C 0045DB8C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x625c, context->r3));
/*80460D90 0045DB90*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x2);
/*80460D94 0045DB94*/ PPC::Runtime::ASM::cmplw(context->r5, context->r0);
/*80460D98 0045DB98*/ PPC::Runtime::ASM::blt(.L_80460D50);
/*80460D9C 0045DB9C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x2);
/*80460DA0 0045DBA0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x2);
/*80460DA4 0045DBA4*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x2);
/*80460DA8 0045DBA8*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80460DAC, 0x80460DAC) //this is a jump label
/*80460DAC 0045DBAC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x625e, context->r3));
/*80460DB0 0045DBB0*/ PPC::Runtime::ASM::cmplw(context->r6, context->r0);
/*80460DB4 0045DBB4*/ PPC::Runtime::ASM::blt(.L_80460D48);
/*80460DB8 0045DBB8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x625c, context->r3));
/*80460DBC 0045DBBC*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x7729);
/*80460DC0 0045DBC0*/ PPC::Runtime::ASM::addi(context->r8, context->r3, 0x6cc5);
/*80460DC4 0045DBC4*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80460DC8 0045DBC8*/ PPC::Runtime::ASM::slwi(context->r11, context->r0, 1);
/*80460DCC 0045DBCC*/ PPC::Runtime::ASM::b(.L_80460E38);
RUNTIME_PPC_JUMP_LABEL(.L_80460DD0, 0x80460DD0) //this is a jump label
/*80460DD0 0045DBD0*/ PPC::Runtime::ASM::add(context->r5, context->r11, context->r8);
/*80460DD4 0045DBD4*/ PPC::Runtime::ASM::add(context->r4, context->r11, context->r7);
/*80460DD8 0045DBD8*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*80460DDC 0045DBDC*/ PPC::Runtime::ASM::b(.L_80460E1C);
RUNTIME_PPC_JUMP_LABEL(.L_80460DE0, 0x80460DE0) //this is a jump label
/*80460DE0 0045DBE0*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80460DE4 0045DBE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80460DE8 0045DBE8*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80460DEC 0045DBEC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r12);
/*80460DF0 0045DBF0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80460DF4 0045DBF4*/ PPC::Runtime::ASM::bgt(.L_80460DFC);
/*80460DF8 0045DBF8*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_80460DFC, 0x80460DFC) //this is a jump label
/*80460DFC 0045DBFC*/ PPC::Runtime::ASM::cmplw(context->r6, context->r0);
/*80460E00 0045DC00*/ PPC::Runtime::ASM::blt(.L_80460E08);
/*80460E04 0045DC04*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
RUNTIME_PPC_JUMP_LABEL(.L_80460E08, 0x80460E08) //this is a jump label
/*80460E08 0045DC08*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80460E0C 0045DC0C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*80460E10 0045DC10*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80460E14 0045DC14*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*80460E18 0045DC18*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80460E1C, 0x80460E1C) //this is a jump label
/*80460E1C 0045DC1C*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x625c, context->r3));
/*80460E20 0045DC20*/ PPC::Runtime::ASM::subi(context->r0, context->r6, 0x2);
/*80460E24 0045DC24*/ PPC::Runtime::ASM::cmplw(context->r10, context->r0);
/*80460E28 0045DC28*/ PPC::Runtime::ASM::blt(.L_80460DE0);
/*80460E2C 0045DC2C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x2);
/*80460E30 0045DC30*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x2);
/*80460E34 0045DC34*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80460E38, 0x80460E38) //this is a jump label
/*80460E38 0045DC38*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x625e, context->r3));
/*80460E3C 0045DC3C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x2);
/*80460E40 0045DC40*/ PPC::Runtime::ASM::cmplw(context->r9, context->r0);
/*80460E44 0045DC44*/ PPC::Runtime::ASM::blt(.L_80460DD0);
/*80460E48 0045DC48*/ PPC::Runtime::ASM::blr();
}