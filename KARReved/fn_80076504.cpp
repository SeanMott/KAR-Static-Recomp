//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80076504(PPC::Runtime::GCContext* context)
{
/*80076504 00073304*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80076508 00073308*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007650C 0007330C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80076510 00073310*/ PPC::Runtime::ASM::bl(fn_GXInvalidateVtxCache);
/*80076514 00073314*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*80076518 00073318*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8007651C 0007331C*/ PPC::Runtime::ASM::bl(fn_HSD_StartRender);
/*80076520 00073320*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD5D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80076524 00073324*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80076528 00073328*/ PPC::Runtime::ASM::bl(fn_804516E4);
/*8007652C 0007332C*/ PPC::Runtime::ASM::bl(fn_804105E4);
/*80076530 00073330*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80076534 00073334*/ PPC::Runtime::ASM::bl(fn_HSD_VICopyXFBAsync);
/*80076538 00073338*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007653C 0007333C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80076540 00073340*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80076544 00073344*/ PPC::Runtime::ASM::blr();
}