//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DBGEXIImm.hpp"
#include "fn_DBGEXIImm.hpp"



void fn_DBGReadStatus(PPC::Runtime::GCContext* context)
{
/*803F408C 003F0E8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F4090 003F0E90*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*803F4094 003F0E94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803F4098 003F0E98*/ PPC::Runtime::ASM::lis(context->r0, 0x6000);
/*803F409C 003F0E9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*803F40A0 003F0EA0*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803F40A4 003F0EA4*/ PPC::Runtime::ASM::lis(context->r30, 0xcc00);
/*803F40A8 003F0EA8*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*803F40AC 003F0EAC*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x6800);
/*803F40B0 003F0EB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*803F40B4 003F0EB4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6828, context->r30));
/*803F40B8 003F0EB8*/ PPC::Runtime::ASM::andi.(context->r5, context->r5, 0x405);
/*803F40BC 003F0EBC*/ PPC::Runtime::ASM::ori(context->r5, context->r5, 0xc0);
/*803F40C0 003F0EC0*/ PPC::Runtime::ASM::stwu(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*803F40C4 003F0EC4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803F40C8 003F0EC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803F40CC 003F0ECC*/ PPC::Runtime::ASM::bl(fn_DBGEXIImm);
/*803F40D0 003F0ED0*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803F40D4 003F0ED4*/ PPC::Runtime::ASM::srwi(context->r31, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_803F40D8, 0x803F40D8) //this is a jump label
/*803F40D8 003F0ED8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x6800);
/*803F40DC 003F0EDC*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/* 803F40E0 003F0EE0  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803F40E4 003F0EE4*/ PPC::Runtime::ASM::bne(.L_803F40D8);
/*803F40E8 003F0EE8*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x0);
/*803F40EC 003F0EEC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*803F40F0 003F0EF0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803F40F4 003F0EF4*/ PPC::Runtime::ASM::bl(fn_DBGEXIImm);
/*803F40F8 003F0EF8*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803F40FC 003F0EFC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*803F4100 003F0F00*/ PPC::Runtime::ASM::or(context->r3, context->r31, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803F4104, 0x803F4104) //this is a jump label
/*803F4104 003F0F04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/* 803F4108 003F0F08  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*803F410C 003F0F0C*/ PPC::Runtime::ASM::bne(.L_803F4104);
/*803F4110 003F0F10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803F4114 003F0F14*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*803F4118 003F0F18*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*803F411C 003F0F1C*/ PPC::Runtime::ASM::andi.(context->r0, context->r4, 0x405);
/*803F4120 003F0F20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803F4124 003F0F24*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803F4128 003F0F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803F412C 003F0F2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*803F4130 003F0F30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F4134 003F0F34*/ PPC::Runtime::ASM::blr();
}