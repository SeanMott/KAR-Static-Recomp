//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8008B1E0.hpp"
#include "fn_80062CA4.hpp"



void fn_8009A3D8(PPC::Runtime::GCContext* context)
{
/*8009A3D8 000971D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8009A3DC 000971DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8009A3E0 000971E0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF004 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009A3E4 000971E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8009A3E8 000971E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8009A3EC 000971EC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF010 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8009A3F0 000971F0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8009A3F4 000971F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8009A3F8 000971F8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8009A3FC 000971FC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8009A400 00097200*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8009A404 00097204*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8009A408 00097208*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8009A40C 0009720C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8009A410 00097210*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8009A414 00097214*/ PPC::Runtime::ASM::bl(fn_8008B1E0);
/*8009A418 00097218*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8009A41C 0009721C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8009A420 00097220*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8009A424 00097224*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8009A428 00097228*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8009A42C 0009722C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8009A430 00097230*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8009A434 00097234*/ PPC::Runtime::ASM::blr();
}