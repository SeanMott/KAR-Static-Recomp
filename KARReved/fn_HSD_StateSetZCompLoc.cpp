//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GXSetZCompLoc.hpp"



void fn_HSD_StateSetZCompLoc(PPC::Runtime::GCContext* context)
{
/*803F8868 003F5668*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F886C 003F566C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F8870 003F5670*/ PPC::Runtime::ASM::neg(context->r4, context->r3);
/*803F8874 003F5674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F8878 003F5678*/ PPC::Runtime::ASM::or(context->r3, context->r4, context->r3);
/*803F887C 003F567C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F8880 003F5680*/ PPC::Runtime::ASM::srwi(context->r31, context->r3, 31);
/*803F8884 003F5684*/ PPC::Runtime::ASM::lbz(context->r0, SkipAddress_42 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803F8888 003F5688*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*803F888C 003F568C*/ PPC::Runtime::ASM::beq(.L_803F889C);
/*803F8890 003F5690*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F8894 003F5694*/ PPC::Runtime::ASM::bl(fn_GXSetZCompLoc);
/*803F8898 003F5698*/ PPC::Runtime::ASM::stb(context->r31, SkipAddress_42 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803F889C, 0x803F889C) //this is a jump label
/*803F889C 003F569C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F88A0 003F56A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F88A4 003F56A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F88A8 003F56A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F88AC 003F56AC*/ PPC::Runtime::ASM::blr();
}