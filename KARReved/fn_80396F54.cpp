//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80391F10.hpp"
#include "fn_80391F10.hpp"
#include "fn_80396C8C.hpp"



void fn_80396F54(PPC::Runtime::GCContext* context)
{
/*80396F54 00393D54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80396F58 00393D58*/ PPC::Runtime::ASM::mflr(context->r0);
/*80396F5C 00393D5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80396F60 00393D60*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80396F64 00393D64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80396F68 00393D68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80396F6C 00393D6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80396F70 00393D70*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80396F74 00393D74*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80396F78 00393D78*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_55 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80396F7C 00393D7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*80396F80 00393D80*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80396F84 00393D84*/ PPC::Runtime::ASM::beq(.L_80396F8C);
/*80396F88 00393D88*/ PPC::Runtime::ASM::b(.L_80396F90);
RUNTIME_PPC_JUMP_LABEL(.L_80396F8C, 0x80396F8C) //this is a jump label
/*80396F8C 00393D8C*/ PPC::Runtime::ASM::li(context->r4, lbl_805DC170 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80396F90, 0x80396F90) //this is a jump label
/*80396F90 00393D90*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5794 @ Get_MemoryOffset_HighBit);
/*80396F94 00393D94*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F5794 @ Get_MemoryOffset_LowBit);
/*80396F98 00393D98*/ PPC::Runtime::ASM::bl(fn_80391F10);
/*80396F9C 00393D9C*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 24);
/*80396FA0 00393DA0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80396FA4 00393DA4*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80396FA8 00393DA8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*80396FAC 00393DAC*/ PPC::Runtime::ASM::srwi(context->r30, context->r0, 31);
/*80396FB0 00393DB0*/ PPC::Runtime::ASM::bne(.L_80396FBC);
/*80396FB4 00393DB4*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80396FB8 00393DB8*/ PPC::Runtime::ASM::b(.L_80397040);
RUNTIME_PPC_JUMP_LABEL(.L_80396FBC, 0x80396FBC) //this is a jump label
/*80396FBC 00393DBC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r31));
/*80396FC0 00393DC0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80396FC4 00393DC4*/ PPC::Runtime::ASM::beq(.L_80396FCC);
/*80396FC8 00393DC8*/ PPC::Runtime::ASM::b(.L_80396FD0);
RUNTIME_PPC_JUMP_LABEL(.L_80396FCC, 0x80396FCC) //this is a jump label
/*80396FCC 00393DCC*/ PPC::Runtime::ASM::li(context->r4, lbl_805DC170 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80396FD0, 0x80396FD0) //this is a jump label
/*80396FD0 00393DD0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5794 @ Get_MemoryOffset_HighBit);
/*80396FD4 00393DD4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F5794 @ Get_MemoryOffset_LowBit);
/*80396FD8 00393DD8*/ PPC::Runtime::ASM::bl(fn_80391F10);
/*80396FDC 00393DDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80396FE0 00393DE0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80396FE4 00393DE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80396FE8 00393DE8*/ PPC::Runtime::ASM::beq(.L_80396FFC);
/*80396FEC 00393DEC*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*80396FF0 00393DF0*/ PPC::Runtime::ASM::bl(fn_hsdSearchClassInfo);
/*80396FF4 00393DF4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80396FF8 00393DF8*/ PPC::Runtime::ASM::bne(.L_80397008);
RUNTIME_PPC_JUMP_LABEL(.L_80396FFC, 0x80396FFC) //this is a jump label
/*80396FFC 00393DFC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAlloc);
/*80397000 00393E00*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80397004 00393E04*/ PPC::Runtime::ASM::b(.L_80397028);
RUNTIME_PPC_JUMP_LABEL(.L_80397008, 0x80397008) //this is a jump label
/*80397008 00393E08*/ PPC::Runtime::ASM::bl(fn_hsdNew);
/* 8039700C 00393E0C  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80397010 00393E10*/ PPC::Runtime::ASM::bne(.L_80397028);
/*80397014 00393E14*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5750 @ Get_MemoryOffset_HighBit);
/*80397018 00393E18*/ PPC::Runtime::ASM::li(context->r4, 0x26b);
/*8039701C 00393E1C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F5750 @ Get_MemoryOffset_LowBit);
/*80397020 00393E20*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC174 @ Get_MemoryOffset_SDA21);
/*80397024 00393E24*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80397028, 0x80397028) //this is a jump label
/*80397028 00393E28*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8039702C 00393E2C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80397030 00393E30*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*80397034 00393E34*/ PPC::Runtime::ASM::mr(context->r7, context->r30);
/*80397038 00393E38*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8039703C 00393E3C*/ PPC::Runtime::ASM::bl(fn_80396C8C);
RUNTIME_PPC_JUMP_LABEL(.L_80397040, 0x80397040) //this is a jump label
/*80397040 00393E40*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80397044 00393E44*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80397048 00393E48*/ PPC::Runtime::ASM::bl(fn_HSD_JObjResolveRefsAll);
/*8039704C 00393E4C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80397050 00393E50*/ PPC::Runtime::ASM::bl(fn_803F476C);
/*80397054 00393E54*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80397058 00393E58*/ PPC::Runtime::ASM::bl(fn_803F9FA4);
/*8039705C 00393E5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80397060 00393E60*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80397064 00393E64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80397068 00393E68*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039706C 00393E6C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80397070 00393E70*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80397074 00393E74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80397078 00393E78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8039707C 00393E7C*/ PPC::Runtime::ASM::blr();
}