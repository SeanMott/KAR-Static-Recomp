//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_EXIImmEx.hpp"
#include "EXIDeselect.hpp"
#include "EXISelect.hpp"
#include "EXIImm.hpp"
#include "EXISync.hpp"
#include "fn_EXIImmEx.hpp"
#include "EXIDeselect.hpp"
#include "EXISelect.hpp"
#include "EXIImm.hpp"
#include "EXISync.hpp"
#include "fn_EXIImmEx.hpp"
#include "EXIDeselect.hpp"
#include "EXIUnlock.hpp"



void fn_80468044(PPC::Runtime::GCContext* context)
{
/*80468044 00464E44*/ PPC::Runtime::ASM::mflr(context->r0);
/*80468048 00464E48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046804C 00464E4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80468050 00464E50*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE5D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80468054 00464E54*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*80468058 00464E58*/ PPC::Runtime::ASM::beq(.L_80468074);
/*8046805C 00464E5C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE5C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80468060 00464E60*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80468064 00464E64*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE5CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80468068 00464E68*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8046806C 00464E6C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80468070 00464E70*/ PPC::Runtime::ASM::bl(fn_EXIImmEx);
RUNTIME_PPC_JUMP_LABEL(.L_80468074, 0x80468074) //this is a jump label
/*80468074 00464E74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80468078 00464E78*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*8046807C 00464E7C*/ PPC::Runtime::ASM::lis(context->r0, 0x8000);
/*80468080 00464E80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80468084 00464E84*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80468088 00464E88*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8046808C 00464E8C*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80468090 00464E90*/ PPC::Runtime::ASM::bl(EXISelect);
/*80468094 00464E94*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*80468098 00464E98*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8046809C 00464E9C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*804680A0 00464EA0*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*804680A4 00464EA4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*804680A8 00464EA8*/ PPC::Runtime::ASM::bl(EXIImm);
/*804680AC 00464EAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804680B0 00464EB0*/ PPC::Runtime::ASM::bl(EXISync);
/*804680B4 00464EB4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1d);
/*804680B8 00464EB8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804680BC 00464EBC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*804680C0 00464EC0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*804680C4 00464EC4*/ PPC::Runtime::ASM::bl(fn_EXIImmEx);
/*804680C8 00464EC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804680CC 00464ECC*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*804680D0 00464ED0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d, context->r1));
/*804680D4 00464ED4*/ PPC::Runtime::ASM::lis(context->r0, 0xc000);
/*804680D8 00464ED8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804680DC 00464EDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804680E0 00464EE0*/ PPC::Runtime::ASM::ori(context->r4, context->r4, 0x4);
/*804680E4 00464EE4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804680E8 00464EE8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*804680EC 00464EEC*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*804680F0 00464EF0*/ PPC::Runtime::ASM::bl(EXISelect);
/*804680F4 00464EF4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*804680F8 00464EF8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804680FC 00464EFC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80468100 00464F00*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80468104 00464F04*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80468108 00464F08*/ PPC::Runtime::ASM::bl(EXIImm);
/*8046810C 00464F0C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80468110 00464F10*/ PPC::Runtime::ASM::bl(EXISync);
/*80468114 00464F14*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80468118 00464F18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8046811C 00464F1C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80468120 00464F20*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80468124 00464F24*/ PPC::Runtime::ASM::bl(fn_EXIImmEx);
/*80468128 00464F28*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8046812C 00464F2C*/ PPC::Runtime::ASM::bl(EXIDeselect);
/*80468130 00464F30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80468134 00464F34*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*80468138 00464F38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8046813C 00464F3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80468140 00464F40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80468144 00464F44*/ PPC::Runtime::ASM::blr();
}