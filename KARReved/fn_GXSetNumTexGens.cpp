//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetNumTexGens(PPC::Runtime::GCContext* context)
{
/*803CBA08 003C8808*/ PPC::Runtime::ASM::lwz(context->r6, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CBA0C 003C880C*/ PPC::Runtime::ASM::clrlwi(context->r8, context->r3, 24);
/*803CBA10 003C8810*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*803CBA14 003C8814*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r6));
/*803CBA18 003C8818*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*803CBA1C 003C881C*/ PPC::Runtime::ASM::li(context->r0, 0x103f);
/*803CBA20 003C8820*/ PPC::Runtime::ASM::clrrwi(context->r5, context->r5, 4);
/*803CBA24 003C8824*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r8);
/*803CBA28 003C8828*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r6));
/*803CBA2C 003C882C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CBA30 003C8830*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CBA34 003C8834*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CBA38 003C8838*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r6));
/*803CBA3C 003C883C*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x4);
/*803CBA40 003C8840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r6));
/*803CBA44 003C8844*/ PPC::Runtime::ASM::blr();
}