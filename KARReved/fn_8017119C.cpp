//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80170F28.hpp"
#include "fn_80145184.hpp"
#include "fn_801466A8.hpp"
#include "fn_801466A8.hpp"
#include "fn_801466A8.hpp"
#include "fn_80145564.hpp"
#include "fn_80145564.hpp"
#include "fn_80145564.hpp"
#include "fn_80145C80.hpp"
#include "fn_80145C80.hpp"



void fn_8017119C(PPC::Runtime::GCContext* context)
{
/*8017119C 0016DF9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801711A0 0016DFA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801711A4 0016DFA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801711A8 0016DFA8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801711AC 0016DFAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801711B0 0016DFB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801711B4 0016DFB4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801711B8 0016DFB8*/ PPC::Runtime::ASM::bl(fn_80170F28);
/*801711BC 0016DFBC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*801711C0 0016DFC0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801711C4 0016DFC4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*801711C8 0016DFC8*/ PPC::Runtime::ASM::bgt(.L_801712F8);
/*801711CC 0016DFCC*/ PPC::Runtime::ASM::lis(context->r3, jumptable_804ACD70 @ Get_MemoryOffset_HighBit);
/*801711D0 0016DFD0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801711D4 0016DFD4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_804ACD70 @ Get_MemoryOffset_LowBit);
/*801711D8 0016DFD8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*801711DC 0016DFDC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*801711E0 0016DFE0*/ PPC::Runtime::ASM::bctr();
/*801711E4 0016DFE4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801711E8 0016DFE8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801711EC 0016DFEC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*801711F0 0016DFF0*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r31));
/*801711F4 0016DFF4*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*801711F8 0016DFF8*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*801711FC 0016DFFC*/ PPC::Runtime::ASM::bl(fn_80145184);
/*80171200 0016E000*/ PPC::Runtime::ASM::b(.L_801712F8);
/*80171204 0016E004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80171208 0016E008*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017120C 0016E00C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80171210 0016E010*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*80171214 0016E014*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*80171218 0016E018*/ PPC::Runtime::ASM::extsh(context->r5, context->r0);
/*8017121C 0016E01C*/ PPC::Runtime::ASM::bl(fn_801466A8);
/*80171220 0016E020*/ PPC::Runtime::ASM::b(.L_801712F8);
/*80171224 0016E024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80171228 0016E028*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017122C 0016E02C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80171230 0016E030*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*80171234 0016E034*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*80171238 0016E038*/ PPC::Runtime::ASM::extsh(context->r5, context->r0);
/*8017123C 0016E03C*/ PPC::Runtime::ASM::bl(fn_801466A8);
/*80171240 0016E040*/ PPC::Runtime::ASM::b(.L_801712F8);
/*80171244 0016E044*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*80171248 0016E048*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017124C 0016E04C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80171250 0016E050*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*80171254 0016E054*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*80171258 0016E058*/ PPC::Runtime::ASM::extsh(context->r5, context->r0);
/*8017125C 0016E05C*/ PPC::Runtime::ASM::bl(fn_801466A8);
/*80171260 0016E060*/ PPC::Runtime::ASM::b(.L_801712F8);
/*80171264 0016E064*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80171268 0016E068*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017126C 0016E06C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*80171270 0016E070*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*80171274 0016E074*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*80171278 0016E078*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8017127C 0016E07C*/ PPC::Runtime::ASM::bl(fn_80145564);
/*80171280 0016E080*/ PPC::Runtime::ASM::b(.L_801712F8);
/*80171284 0016E084*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80171288 0016E088*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8017128C 0016E08C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*80171290 0016E090*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80171294 0016E094*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*80171298 0016E098*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8017129C 0016E09C*/ PPC::Runtime::ASM::bl(fn_80145564);
/*801712A0 0016E0A0*/ PPC::Runtime::ASM::b(.L_801712F8);
/*801712A4 0016E0A4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801712A8 0016E0A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801712AC 0016E0AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*801712B0 0016E0B0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801712B4 0016E0B4*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*801712B8 0016E0B8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801712BC 0016E0BC*/ PPC::Runtime::ASM::bl(fn_80145564);
/*801712C0 0016E0C0*/ PPC::Runtime::ASM::b(.L_801712F8);
/*801712C4 0016E0C4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801712C8 0016E0C8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801712CC 0016E0CC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*801712D0 0016E0D0*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*801712D4 0016E0D4*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*801712D8 0016E0D8*/ PPC::Runtime::ASM::bl(fn_80145C80);
/*801712DC 0016E0DC*/ PPC::Runtime::ASM::b(.L_801712F8);
/*801712E0 0016E0E0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801712E4 0016E0E4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801712E8 0016E0E8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*801712EC 0016E0EC*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*801712F0 0016E0F0*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d, context->r31));
/*801712F4 0016E0F4*/ PPC::Runtime::ASM::bl(fn_80145C80);
RUNTIME_PPC_JUMP_LABEL(.L_801712F8, 0x801712F8) //this is a jump label
/*801712F8 0016E0F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801712FC 0016E0FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80171300 0016E100*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80171304 0016E104*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80171308 0016E108*/ PPC::Runtime::ASM::blr();
}