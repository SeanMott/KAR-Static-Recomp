//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80245F70.hpp"
#include "fn_802461EC.hpp"



void fn_801CE5B4(PPC::Runtime::GCContext* context)
{
/*801CE5B4 001CB3B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CE5B8 001CB3B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CE5BC 001CB3BC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1A4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CE5C0 001CB3C0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801CE5C4 001CB3C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CE5C8 001CB3C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CE5CC 001CB3CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CE5D0 001CB3D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801CE5D4 001CB3D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CE5D8 001CB3D8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801CE5DC 001CB3DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x3e8);
/*801CE5E0 001CB3E0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x43c);
/*801CE5E4 001CB3E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CE5E8 001CB3E8*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x448);
/*801CE5EC 001CB3EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CE5F0 001CB3F0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801CE5F4 001CB3F4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CE5F8 001CB3F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CE5FC 001CB3FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r31));
/*801CE600 001CB400*/ PPC::Runtime::ASM::bl(fn_80245F70);
/*801CE604 001CB404*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CE608 001CB408*/ PPC::Runtime::ASM::bl(fn_802461EC);
/*801CE60C 001CB40C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r31));
/*801CE610 001CB410*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*801CE614 001CB414*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CE618 001CB418*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36c, context->r31));
/*801CE61C 001CB41C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*801CE620 001CB420*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r31));
/*801CE624 001CB424*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CE628 001CB428*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x370, context->r31));
/*801CE62C 001CB42C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801CE630 001CB430*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r31));
/*801CE634 001CB434*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801CE638 001CB438*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x374, context->r31));
/*801CE63C 001CB43C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CE640 001CB440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CE644 001CB444*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CE648 001CB448*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CE64C 001CB44C*/ PPC::Runtime::ASM::blr();
}