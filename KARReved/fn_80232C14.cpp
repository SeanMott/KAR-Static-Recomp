//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022C568.hpp"



void fn_80232C14(PPC::Runtime::GCContext* context)
{
/*80232C14 0022FA14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80232C18 0022FA18*/ PPC::Runtime::ASM::mflr(context->r0);
/*80232C1C 0022FA1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232C20 0022FA20*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80232C24 0022FA24*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80232C28 0022FA28*/ PPC::Runtime::ASM::beq(.L_80232CC0);
/*80232C2C 0022FA2C*/ PPC::Runtime::ASM::addis(context->r4, context->r3, 0x1);
/*80232C30 0022FA30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1edc, context->r4));
/*80232C34 0022FA34*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80232C38 0022FA38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1edc, context->r4));
/*80232C3C 0022FA3C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1NULL4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80232C40 0022FA40*/ PPC::Runtime::ASM::addis(context->r5, context->r6, 0x1);
/*80232C44 0022FA44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1edc, context->r5));
/*80232C48 0022FA48*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1c20);
/*80232C4C 0022FA4C*/ PPC::Runtime::ASM::bgt(.L_80232CA8);
/*80232C50 0022FA50*/ PPC::Runtime::ASM::lis(context->r3, 0x5555);
/*80232C54 0022FA54*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x5556);
/* 80232C58 0022FA58  7C 60 20 96 */ mulhw context->r3 , context->r0 , context->r4
/*80232C5C 0022FA5C*/ PPC::Runtime::ASM::srwi(context->r0, context->r3, 31);
/*80232C60 0022FA60*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80232C64 0022FA64*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3);
/*80232C68 0022FA68*/ PPC::Runtime::ASM::subf.(context->r0, context->r0, context->r4);
/*80232C6C 0022FA6C*/ PPC::Runtime::ASM::bne(.L_80232CA8);
/*80232C70 0022FA70*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1ed0, context->r5));
/*80232C74 0022FA74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1ed8, context->r5));
/*80232C78 0022FA78*/ PPC::Runtime::ASM::extrwi(context->r4, context->r3, 1, 25);
/*80232C7C 0022FA7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1ee0, context->r5));
/*80232C80 0022FA80*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x7090);
/*80232C84 0022FA84*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*80232C88 0022FA88*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80232C8C 0022FA8C*/ PPC::Runtime::ASM::add(context->r4, context->r6, context->r4);
/*80232C90 0022FA90*/ PPC::Runtime::ASM::bl(fn_8022C568);
/*80232C94 0022FA94*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80232C98 0022FA98*/ PPC::Runtime::ASM::addis(context->r4, context->r3, 0x1);
/*80232C9C 0022FA9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1ed8, context->r4));
/*80232CA0 0022FAA0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80232CA4 0022FAA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1ed8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80232CA8, 0x80232CA8) //this is a jump label
/*80232CA8 0022FAA8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80232CAC 0022FAAC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80232CB0 0022FAB0*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x1);
/*80232CB4 0022FAB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1ed0, context->r3));
/*80232CB8 0022FAB8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*80232CBC 0022FABC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1ed0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80232CC0, 0x80232CC0) //this is a jump label
/*80232CC0 0022FAC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232CC4 0022FAC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80232CC8 0022FAC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80232CCC 0022FACC*/ PPC::Runtime::ASM::blr();
}