//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114904.hpp"
#include "fn_80122D58.hpp"
#include "fn_80122D58.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"



void fn_80122E24(PPC::Runtime::GCContext* context)
{
/*80122E24 0011FC24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80122E28 0011FC28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80122E2C 0011FC2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80122E30 0011FC30*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80122E34 0011FC34*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80122E38 0011FC38*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*80122E3C 0011FC3C*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*80122E40 0011FC40*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80122E44 0011FC44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80122E48 0011FC48*/ PPC::Runtime::ASM::slwi(context->r30, context->r25, 2);
/*80122E4C 0011FC4C*/ PPC::Runtime::ASM::addi(context->r28, context->r31, 0x578);
/*80122E50 0011FC50*/ PPC::Runtime::ASM::add(context->r29, context->r28, context->r30);
/*80122E54 0011FC54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80122E58 0011FC58*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80122E5C 0011FC5C*/ PPC::Runtime::ASM::bne(.L_80122EEC);
/*80122E60 0011FC60*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x4);
/*80122E64 0011FC64*/ PPC::Runtime::ASM::bge(.L_80122EEC);
/*80122E68 0011FC68*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x4);
/*80122E6C 0011FC6C*/ PPC::Runtime::ASM::blt(.L_80122E74);
/*80122E70 0011FC70*/ PPC::Runtime::ASM::b(.L_80122EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80122E74, 0x80122E74) //this is a jump label
/*80122E74 0011FC74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80122E78 0011FC78*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80122E7C 0011FC7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80122E80 0011FC80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80122E84 0011FC84*/ PPC::Runtime::ASM::bl(fn_80114904);
/*80122E88 0011FC88*/ PPC::Runtime::ASM::lis(context->r4, fn_80122D58 @ Get_MemoryOffset_HighBit);
/*80122E8C 0011FC8C*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80122E90 0011FC90*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80122E94 0011FC94*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*80122E98 0011FC98*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80122D58 @ Get_MemoryOffset_LowBit);
/*80122E9C 0011FC9C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80122EA0 0011FCA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80122EA4 0011FCA4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80122EA8 0011FCA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFE68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80122EAC 0011FCAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80122EB0 0011FCB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFE6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80122EB4 0011FCB4*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*80122EB8 0011FCB8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80122EBC 0011FCBC*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80122EC0 0011FCC0*/ PPC::Runtime::ASM::mr(context->r6, context->r25);
/*80122EC4 0011FCC4*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*80122EC8 0011FCC8*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*80122ECC 0011FCCC*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r30);
/*80122ED0 0011FCD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80122ED4 0011FCD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*80122ED8 0011FCD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80122EDC 0011FCDC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80122EE0 0011FCE0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 30, 30);
/*80122EE4 0011FCE4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80122EE8 0011FCE8*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80122EEC, 0x80122EEC) //this is a jump label
/*80122EEC 0011FCEC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80122EF0 0011FCF0*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*80122EF4 0011FCF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80122EF8 0011FCF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80122EFC 0011FCFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80122F00 0011FD00*/ PPC::Runtime::ASM::blr();
}